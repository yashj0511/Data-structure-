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
	void sort();
	void display();
	void swap(node *i,node *j);
	dll merge( dll l1,dll l2);
	void display_merge();

};

void dll::swap(node *i, node *j)
{
int temp;	
temp=i->value;
i->value=j->value;
j->value=temp;



}



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
void dll::sort()
{
node *i;
node *j;

for(i=head;i!=NULL;i=i->next)
{
	for (j=i->next;j!=NULL;j=j->next)
	{
		if(i->value>j->value)
		{
		
		swap(i,j);
			
		}
		
		
	}
}



}

dll dll::merge(dll l1  ,dll  l2)
{
node* p=l1.head;
node* q=l2.head;
node* r;
dll l3;
if(p==NULL)
{
l3.head=q;
return l3;
	
}
if(q==NULL)
{
l3.head=p;
return l3;	
	
}

if(p!=NULL && q!=NULL)
{
if(p->value<=q->value)
{
r=p;
p=p->next;

	
}
else
{
	r=q;
	q=q->next;
	
}
}

r=l3.head;
while(p!=NULL && q!=NULL)
{
	if(p->value<=q->value){
		r->next=p;
		p->pre=r;
		r=p;
		p=p->next;
		
	}
	else
	{
		r->next=q;
		q->pre=r;
		r=q;
		q=q->next;
	}
}

if(p==NULL){
	while(q!=NULL){
	
	r->next=q;
	q->pre=r;
	r=r->next;
}
}
if(q==NULL)
{
	while(p!=NULL)
	{
	
	r->next=p;
	p->pre=r;
		r=r->next;
}
}
return l3;
	
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


void dll::display_merge()
{
	node* r=NULL;
	r=head;
	while(r!=NULL)
	{
		cout<<"The elements are"<<r->value;
		r=r->next;
		
		
	}
}

int main()
{
	

	
	
dll l1;
dll l2;
dll l3;
l1.create();
l1.sort();
l1.display();
l2.create();
l2.sort();
l2.display();	
l3.merge(l1,l2);
l3.display_merge();
	
}
