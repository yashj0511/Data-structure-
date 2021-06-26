
//Name-Yash C Jaware
//Roll no-142
//batch-C2
//prn no-0120190287
//seat number-S204068


#include<iostream>
#include<stack>
#include<queue>
using namespace std;
//Definition of Node for Binary search tree

class BstNode 
{
	public:
		
	int data; 
	BstNode* left;
	BstNode* right;
};


// Function to create a new Node in heap
BstNode* GetNewNode(int data)
 {
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

// To insert data in BST, returns address of root node 
BstNode* Insert(BstNode* root,int data) 
{
	if(root == NULL)
	
	{ // empty tree
		root = GetNewNode(data);
	}
	// if data to be inserted is lesser, insert in left subtree. 
	
	else if(data < root->data) 
	{
		root->left = Insert(root->left,data);
	}
	// else, insert in right subtree. 
	else 
	{
		root->right = Insert(root->right,data);
	}
	return root;
}

//To search an element in BST, returns true if element is found
bool Search(BstNode* root,int data) 
{
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else 
	{
		return Search(root->right,data);
	}
}


BstNode* deleteNode(BstNode* root, int k)
{
    // Base case
    if (root == NULL)
        return root;
 
    // Recursive calls for ancestors of
    // node to be deleted
    if (root->data > k) {
        root->left = deleteNode(root->left, k);
        return root;
    }
    else if (root->data < k)
	 {
        root->right = deleteNode(root->right, k);
        return root;
    }
 
    // We reach here when root is the node
    // to be deleted.
 
    // If one of the children is empty
    if (root->left == NULL) {
        BstNode* temp = root->right;
        delete root;
        return temp;
    }
    else if (root->right == NULL) {
        BstNode* temp = root->left;
        delete root;
        return temp;
    }
 
    // If both children exist
    else {
 
        BstNode* succParent = root;
 
        // Find successor
        BstNode* succ = root->right;
        while (succ->left != NULL) {
            succParent = succ;
            succ = succ->left;
        }
 
        // Delete successor.  Since successor
        // is always left child of its parent
        // we can safely make successor's right
        // right child as left of its parent.
        // If there is no succ, then assign
        // succ->right to succParent->right
        if (succParent != root)
            succParent->left = succ->right;
        else
            succParent->right = succ->right;
 
        // Copy Successor Data to root
        root->data = succ->data;
 
        // Delete Successor and return root
        delete succ;
        return root;
    }
}
    

void printPostorder(BstNode* root) 
{ 
    if (root == NULL) 
        return; 
  
    // first recur on left subtree 
    printPostorder(root->left); 
  
    // then recur on right subtree 
    printPostorder(root->right); 
  
    // now deal with the node 
    cout << root->data << " "<<endl; 
} 
  
/* Given a binary tree, print its nodes in inorder*/
void printInorder(BstNode* root) 
{ 
    if (root == NULL) 
        return; 
  
    /* first recur on left child */
    printInorder(root->left); 
    /* then print the data of node */
    cout << root->data << " "<<endl; 
    /* now recur on right child */
    printInorder(root->right); 
} 
  
/* Given a binary tree, print its nodes in preorder*/
void printPreorder(BstNode* root) 
{ 
    if (root == NULL) 
        return; 
  
    /* first print data of node */
    cout << root->data << " "<<endl; 
  
    /* then recur on left sutree */
    printPreorder(root->left);  
  
    /* now recur on right subtree */
    printPreorder(root->right); 
} 


//non recursive inorder
void inOrder(BstNode *root)
{
    stack<BstNode *> s;
    BstNode *curr = root;
 
    while (curr != NULL || s.empty() == false)
    {
        /* Reach the left most Node of the
           curr Node */
        while (curr !=  NULL)
        {
            /* place pointer to a tree node on
               the stack before traversing
              the node's left subtree */
            s.push(curr);
            curr = curr->left;
        }
 
        /* Current must be NULL at this point */
        curr = s.top();
        s.pop();
 
        cout << curr->data << " ";
 
        /* we have visited the node and its
           left subtree.  Now, it's right
           subtree's turn */
        curr = curr->right;
 
    } /* end of while */
}

// Level Order Printing
void printLevelOrder(BstNode *root)
{
// Base Case
if (root == NULL) return;
// Create an empty queue for level order tarversal
queue<BstNode *> q;
// Enqueue Root and initialize height
q.push(root);
while (q.empty() == false)
{
// nodeCount (queue size) indicates number
// of nodes at current lelvel.
int nodeCount = q.size();
// Dequeue all nodes of current level and
// Enqueue all nodes of next level
cout<<" ===> ";
while (nodeCount > 0)
{
BstNode *node = q.front();
cout<<node->data<<" ";
q.pop();
if (node->left != NULL)
q.push(node->left);
if (node->right != NULL)
q.push(node->right);
nodeCount--;
}
}
}
 
 
// Non recursive Postorder Traversal using two Stack.
void postOrder(BstNode *root)
{
// Base Case
if (root == NULL) return;
// Create two empty stack for post order traversal
stack<BstNode *> s1;
stack<BstNode *> s2;
// Enqueue Root and initialize height
s1.push(root);
while (s1.empty() == false)
{
BstNode *node = s1.top();
s1.pop();
s2.push(node);
if (node->left != NULL)
s1.push(node->left);
if (node->right != NULL)
s1.push(node->right);
}
while(!s2.empty())
{
BstNode *n= s2.top();
cout<<n->data<<" ";
s2.pop();
}
} 

// Non recursive Preorder Traversal using Stack.
void preOrder(BstNode* root)
{
// Base Case
if (root == NULL)
return;
// Create an empty stack and push root to it
stack<BstNode *> s;
s.push(root);
/* Pop all items one by one. Do following for every popped item a) print it
b) push its right child c) push its left child Note that right child is pushed first so that left is processed first */
while (s.empty() == false) {
// Pop the top item from stack and print it
BstNode* node = s.top();
cout<<node->data<<" ";
s.pop();
// Push right and left children of the popped node to stack
if (node->right)
s.push(node->right);
if (node->left)
s.push(node->left);
}
}

void search(BstNode *root){
		int number;
	cout<<"Enter number be searched\n";
	cin>>number;
	//If number is found, print "FOUND"
	   
	if(Search(root,number) == true)
	{
		cout<<"Found\n";
	 } 
	 
	else cout<<"Not Found\n";
	
}

int main() 
{
	BstNode* root = NULL;  // Creating an empty tree
	/*Code to test the logic*/

int ch=1;
while(ch!=0)
{
int num,s=1,val;	
cout<<"1 -- create BST"<<endl;
cout<<"2--- insert in bst"<<endl;
cout<<"3--- delete from bst"<<endl;
cout<<"4---- Recursive inorder traversal"<<endl;
cout<<"5 ----Recursive preorder traversal"<<endl;
cout<<"6 ----Recursive postorder traversal"<<endl;
cout<<"7-- ---Non recursive inorder "<<endl;	
cout<<"8-- ---Non recursive preorder "<<endl;	
cout<<"9-- ---Non recursive postorder "<<endl;	
cout<<"10----level order printing"<<endl;
cout<<"11----search"<<endl;
cin>>num;

if(num==1){
	while(s!=0){
		cout<<"enter the value"<<endl;
		cin>>val;
		root=Insert(root,val);
		cout<<"enter 0 to stop otherwise enter 1"<<endl;
		cin>>s;
	}
}

else if(num==2){
	cout<<"enter value"<<endl;
	cin>>val;
	root=Insert(root,val);
	cout<<val<<" is inserted in Bst"<<endl;
}
else if(num==3){
	cout<<"check that the value you want to delete is present or not in the bst"<<endl;
	search(root);
cout<<"enter the value you want to delete "<<endl;
cin>>val;	
root=deleteNode(root,val);
cout<<"value "<<val<<" is deletd"<<endl;


}

else if(num==4){
cout<<"recursive inorder traversal"<<endl;
printInorder(root);
 		
}
else if(num==5){
	cout<<"Recursive preorder traversal"<<endl;
	printPreorder(root);
}
else if(num==6){
	cout<<"Recursive postorder traversal"<<endl;
	printPostorder(root);
}

else if(num==7){
	cout<<"Non recursive inorder "<<endl;
	inOrder(root);
}

else if(num==8){
	cout<<"Non recursive preorder "<<endl;
	preOrder(root);
}
else if(num==9){
	cout<<"Non recursive postorder "<<endl;
	postOrder(root);
}
else if(num==10){
		cout<<"level order printing "<<endl;
	printLevelOrder(root);
}
else if(num==11){
	search(root);
	
}
else{
	cout<<"you entered something wrong"<<endl;
}

cout<<" enter 0 to stop otherwise 1"<<endl;
cin>>ch;
}


	
}
