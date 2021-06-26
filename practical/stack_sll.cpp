#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
		
};

class stack{
	public:
		node *top;
		stack()
		{
		top=NULL;
			
		}
		void push();
		void pop();
		void display();
};

void stack::push()
{
		node *temp=NULL;
		temp=new node;
		cout<<"enter the value"<<endl;
		cin>>temp->data;
		temp->next=top;
		top=temp;
		
}

void stack::pop()
{
if (top==NULL){
	cout<<"stack is empty"<<endl;
	
}

else{
	node* P=top;
	top=top->next;
	cout<<"deleteing "<<P->data;
	delete P;
	
}

	
	
	
}

void stack::display()
{
	cout<<"displaying data"<<endl;
	
	node *p=top;
	while(p!=NULL){
		cout<<p->data<<endl;
		p=p->next;
	}
}
int main()
{
	stack s1;
	s1.push();
	s1.push();
	s1.push();
	s1.push();
	s1.push();
	s1.push();
	s1.pop();
	s1.pop();
	s1.pop();
	s1.display();
	
	
	return 0;
}
