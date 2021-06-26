//name :Yash C Jaware
//Roll no:142
//batch C2


#include<iostream>
using namespace std;

class Node{
	public:
		Node *left, *right;
int info;
// True if left pointer points to predecessor in Inorder Traversal
bool lthread;
// True if right pointer points to successor in Inorder Traversal
bool rthread;


};



// Insert a Node in Binary Threaded Tree
Node* insert(Node* root, int ikey)
{
// Searching for a Node with given value
Node* ptr = root;
Node* par = NULL; // Parent of key to be inserted
while (ptr != NULL) {
// If key already exists, return
if (ikey == ptr->info)
{
cout<<endl<<"\t\t Duplicate Key!";
return root;
}
par = ptr; // Update parent pointer
// Moving on left subtree.

if (ikey < ptr->info) {
if (ptr->lthread == false)
ptr = ptr->left;
else
break;
}
else { // Moving on right subtree.
if (ptr->rthread == false)
ptr = ptr->right;
else
break;
}
}

// Create a new Node
Node* tmp = new Node;
tmp->info = ikey;
tmp->lthread = true;
tmp->rthread = true;
if (par == NULL) {
root = tmp;
tmp->left = NULL;
tmp->right = NULL;

cout<<endl<<root<<"=>"<<root->lthread<<" "<<root->left<<" "<<"=="<<root->info<<"=="<<root->right<<" "<<root->rthread<<endl;

}
else if (ikey < (par->info)) {
tmp->left = par->left; // Prececessor
tmp->right = par; // Successor
par->lthread = false; // lthread is converted to left link T ===> False
par->left = tmp; // Tmp will become left child.
//cout<<endl<<tmp<<"=>"<<tmp->lthread<<" "<<tmp->left<<" "<<"=="<<tmp->info<<"=="<<tmp->right<<" "<<tmp->rthread;
}
else {
tmp->left = par; // Parent will become the predecessor for its right child.
tmp->right = par->right; // right pointer will Point to Successor
par->rthread = false; // Convert Thread to link.
par->right = tmp; // New node will become right child of parent.
//cout<<endl<<tmp<<"=>"<<tmp->lthread<<" "<<tmp->left<<" "<<"=="<<tmp->info<<"=="<<tmp->right<<" "<<tmp->rthread;
}
return root;
}

//// Recursive Inorder Traversing
//void inorder(Node* root)
//{
//if(root == NULL)
//return;
////First recur on left subtree
//if(root->lthread == false)
//inorder(root->left);
////Then read the data of child
//cout << root->info<< " "<<endl;
//// Recur on the right subtree
//if(root->rthread == false)
//inorder(root->right);
//}

// Recursive Inorder Traversing

void inorder(Node* root){
if(root == NULL)
return;
//First recur on left subtree
if(root->lthread == false)
inorder(root->left);
//Then read the data of child
cout << root->info<< " "<<endl;
// Recur on the right subtree
if(root->rthread == false)
inorder(root->right);
}
// Recursive Preorder Traversing
void preorder(Node* root){
if(root == NULL)
return;
//First read the data of child
cout << root->info<< " "<<endl;
//Then recur on left subtree
if(root->lthread == false)
preorder(root->left);
//Then Recur on the right subtree
if(root->rthread == false)
preorder(root->right);
}
// Recursive Podtorder Traversing
void postorder(Node* root)
{
	
if(root == NULL)
return;
//Then recur on left subtree
if(root->lthread == false)
postorder(root->left);
//Then Recur on the right subtree
if(root->rthread == false)
postorder(root->right);
//First read the data of child
cout << root->info<< " "<<endl;

}

int main(){
	
	Node  *root =NULL;
	root=insert(root,5);
	root=insert(root,20);
	root=insert(root,100);
	root=insert(root,40);
	root=insert(root,1);
	cout<<"inorder"<<endl;
	inorder(root);
	cout<<"postorder"<<endl;
	postorder(root);
    cout<<"preorder"<<endl;
	preorder(root);
	
	return 0;
}
