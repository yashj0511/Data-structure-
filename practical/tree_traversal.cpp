// Binary Search Tree - Implemenation in C++
// Simple program to create a BST of integers and search an element in it 

#include<iostream>
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
//To search an element in BST, returns true if element is found

bool Search(BstNode* root,int data) 
{	
	if(root == NULL) 
	{
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
	cout<<"preorder traversal"<<endl;
	printPreorder(root);
	cout<<" in order traversal "<<endl;
	printInorder(root);
	cout<<"post order traversal"<<endl;
	printPostorder(root); 
}
