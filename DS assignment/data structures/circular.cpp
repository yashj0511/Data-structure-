#include<iostream>
using namespace std;

class node
{public:
	
	int val;
	node *next;
	
	
};


class linked_list
{
	public:
		node *head;
	     linked_list()
		{
			 head=NULL;
			
		}
		void create();
		void display();
		void isat1();
		void isatend();
		void deletenode();
		void insert();
		void search();
		
	
};



void linked_list::create()
{
int choice =1;
node *p=NULL;
node *temp=NULL;

int no;


 while(choice!=0)
 {
 	
 	cout<<"enter the number"<<endl;
 	cin>>no;
 	
 	if(head==NULL){
 		
 		head = new(node);
 		head->val=no;
 		head->next=NULL;
 		p=head;
 		
	 }
 	
 	else
 	{
 		temp=new(node);
 		
 		temp->val=no;
 		
 		p->next=temp;
 		
 		p=temp;
 		
 		temp->next=head;
 		
 		
	 }
 	
 	
 	cout<<"enter 0 to stop"<<endl;
 	
 	cin>>choice;
 	
 	
 }	
	
}


void linked_list::display()
{
node *p=NULL;
p=head;
	
    while(p->next!=head)
	{
		cout<<"the numbers are "<<p->val<<endl;

		p=p->next;		
		
	}
	cout<<"the numbers are "<<p->val<<endl;

	
}


void linked_list::isat1()
{
	node *temp=NULL;
	node *p=NULL;
	p=head;
	
	 while(p->next!=head)
	{
		p=p->next;		
		
	}
	
	int st;
	temp=new (node);
	cout<<"Enter the number"<<endl;
	cin>>st;
	
	temp->val=st;
	temp->next=head;
	p->next=temp;
	head=temp;
	

}


void linked_list::isatend()
{
	
node *temp=NULL;
node *p=NULL;
 p=head;

 
 while(p->next!=head){
 	p=p->next;
 }
 

temp=new(node);
cout<<"Enter the number"<<endl;
cin>>temp->val;
p->next=temp;

temp->next=head;

p=temp;	
	
}


void linked_list::search()
{int se;
	node *temp;
	node *p;
	p=head;
	int length=1;
	while(p->next!=head)
	{
		
		p=p->next;
		length=length+1;
		break;
		
				
	}
	cout<<"enter the number you want to search "<<endl;
	cin>>se;
	
p=head;	
for(int i=0;i<length+1;i++)
{
if(p->val==se){
	cout<<"Element is found"<<endl;
	
	
}	
	
else 
{
	p=p->next;
	
	}	
	
	
	
}
	
}




void linked_list::insert()
{
	int index;
	int length;
node *p;
node *temp;
p=head;
cout<<"enter idex"<<endl;
	cin>>index;
for(int i=0;i<index-1;i++)
		{
			
			p=p->next;
			
		}
temp=new (node);		
cout<<"enter value"<<endl;
cin>>temp->val;
temp->next=p->next;
p->next=temp;
p=temp;		
		
		
		
	
}

void linked_list::deletenode()
{
	int del;
	node *p;
	node *temp;
	int index=1;
	cout<<"enter the element you want to delete"<<endl;
	cin>>del;
	p=head;
	int len=1;
	 while(p->next!=head)
	{
	
		if(p->val==del){
			break;
}
else
{
	p=p->next;
	index=index+1;
}
	}
	
	p=head;
	
	for(int i=1;i<index-1;i++)
	{
		p=p->next;
	}
p->next=p->next->next;
	
		

}
int main()
{
	
linked_list a;
int k;
for(int i=0;i<40;i++){

cout<<"Menu"<<endl;
cout<<"1 --create "<<endl;
cout<<"2---display"<<endl;
cout<<"3---insert at any position "<<endl;
cout<<"4---insert at end"<<endl;
cout<<"5---delete"<<endl;
cout<<"6---search"<<endl;
cout<<"7---exit"<<endl;
cout<<"8---insert at beginning"<<endl;

cin>>k;



if(k==1){
	a.create();
}

else if(k==2){

a.display();
}

else if(k==3)
{
	a.insert();
}
else if(k==4)
{
	a.isatend();
	}	

else if(k==5)
{
	a.deletenode();
	}	
	
else if(k==6){
	a.search();
}	

else if(k==7){
	break;
}

else if(k==8){
	a.isat1();
}
else 
{
	cout<<"you have enterd somethin wrong"<<endl;
	
}
}
}
