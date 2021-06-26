#include<iostream>
using namespace std;

class node
{
	public:
		int value;
		node *next;
		node *pre;	
	
		
};


class dll
{
public:
	node *head;
	dll()
	{
	head=NULL;		
	}
	

	void create();
	void display();
	void rev_display();
	void insert_at_1();
	void insert_end();
	void insert_at_any();
	void delete_node();
};



void dll::create()
{
	int no;
	int ch=1;
//node *head;	
//node *temp;
node *p;
while(ch!=0){

cout<<"enter the number"<<endl;

cin>>no;
if(head==NULL)	
{
	head=new (node);
	head->value=no;
	head->next=NULL;
	head->pre=NULL;
	p=head;
	
}
	
	
else
{
node *temp;	
temp=new (node);
temp->next=NULL;
temp->value=no;
p->next=temp;
temp->pre=p;

p=temp;
	
	}	
cout<<"0 to stop ";
cin>>ch;
		

}
}


void dll::display()
{
	
node *p=NULL;
p=head;


if(head==NULL){
	cout<<"list is empty"<<endl;
}

else
while(p!=NULL)
{
	
cout<<"number"<<p->value<<endl;
p=p->next;

		
}
	
		
}

void dll::rev_display()
{

node *p=NULL;
p=head;
while(p->next!=NULL)	
{
	p=p->next;
}

while(p!=NULL){
	cout<<"Numbers"<<p->value<<endl;
	p=p->pre;
	
}

}



void dll::insert_at_1()
{
	

node *temp=NULL;
temp = new node;
cout<<"enter the number"<<endl;
cin>>temp->value;
temp->pre=NULL;
temp->next=head;
head->pre=temp;
temp->pre=NULL;
head=temp;



		
}

		
void dll::insert_end()
{
node *p;
node *temp;
temp=new node;
cout<<"enter the number"<<endl;
cin>>temp->value;
p=head;
while(p->next!=NULL)
{
	p=p->next;
}

p->next=temp;
temp->next=NULL;
temp->pre=p;
temp=p;
	
}

void dll::insert_at_any()
{
node *p=NULL;
node *temp=NULL;
int check;

p=head;

cout<<"enter the value of element in frot of you want to insert"<<endl;
cin>>check;
	temp=new node;
	cout<<"enter the value "<<endl;
cin>>temp->value;

	
while(p->next!=NULL)
{

if(p->value==check){

temp->next=p->next;
p->next->pre=temp;
	p->next=temp;
	temp->pre=p;
	p=temp;
	

	cout<<"insertion in process"<<endl;
	

}
else{

p=p->next;
		
}	

	
}
}

void dll::delete_node()
{
	
int del;
cout<<"enter the value you want to delete"<<endl;
cin>>del;	
node *p=NULL;
p=head;
while(p->next!=NULL){
	if(p->value==del){
		
p->next->pre=p->pre;

p->pre->next=p->next;

				}
else{
	p=p->next;
}
			
}
		
}


int main()
{
//int ch;
//dll a;
//int choice=1;
//    while(choice==1)
//	{
//			cout<<"menu"<<endl;
//		cout<<"1----- create"<<endl;
//		cout<<"2----- display"<<endl;
//		cout<<"3----- insert"<<endl;
//		cout<<"4-----insert at end"<<endl;
//		cout<<"5-----insert at the begining"<<endl;
//		cin>>ch;
//		if(ch==1){
//			a.create();
//		}		
//		else if(ch==2){
//			a.display();
//		}		
//		else if(ch==4)
//		{
//		  a.insert_end();
//		}
//		else if(ch==5)
//		{
//			a.insert_at_1();
//		}
//		cout<<"press 0 to stop"<<endl;
//		cin>>choice;
//		
//	}
//	

dll a;
a.create();
a.insert_at_any();
a.display();
a.delete_node();
a.display();

}
