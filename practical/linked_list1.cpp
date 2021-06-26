#include<iostream>
using namespace std;


class Node
{
	public:
		int data;
		Node *next;
};


class linkedList{
	
	public:
		Node *head;
		
		linkedList()
		{
			
		Node *head =NULL;
		 	
		}
		
		void create();
		void display();
		void add();
		void delete_node();
		
};


void linkedList::create()
{	
int ch=1;
Node *p=NULL;

while(ch!=0){
	if(head==NULL)
	{
		head = new Node;
		cout<<"enter the data"<<endl;
		cin>>head->data;
		head->next=NULL;
		p=head;	
		
	}
	
	else
	{
		Node *temp=NULL;
		temp =new Node;
		cout<<"enter the data"<<endl;
		cin>>temp->data;
		p->next=temp;
		p=temp;
		temp->next=NULL;
		
	}
	
	cout<<"press 0 to stop"<<endl;
	cin>>ch;
	}
	
}


void linkedList::display()
{
	
Node *p=head;

while(p!=NULL)
{
	cout<<"data"<<p->data<<endl;
	p=p->next;	
}
	
}

void linkedList::delete_node()

{
	int del;
	cout<<"enter the data you want to delete";
	cin>>del;
	Node *p=head;
	while(p!=NULL)
	{
		if(p->next->data==del)
		{


			p->next=p->next->next;
				
		}
		else if(p!=NULL)
		{
			p=p->next;
		}
		
		else
		{
			cout<<"element not present in the list"<<endl;
			
		}
	}
}



int main()
{
	linkedList l1;
	l1.create();
	l1.display();
	l1.delete_node();
	l1.display();
	return 0;
}
