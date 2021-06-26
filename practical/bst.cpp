
// Binary Search Tree - Implemenation in C++
// Simple program to create a BST of integers and search an element in it 


#include<iostream>
#include<stack>
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

int main() 
{
	BstNode* root = NULL;  // Creating an empty tree
	/*Code to test the logic*/
	root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);



//	root=deleteNode(root,12);
	// Ask user to enter a number.  
	int number;
	cout<<"Enter number be searched\n";
	cin>>number;
	//If number is found, print "FOUND"
	   
	if(Search(root,number) == true)
	{
		cout<<"Found\n";
	 } 
	 
	else cout<<"Not Found\n";
inOrder(root);
	
	
}
