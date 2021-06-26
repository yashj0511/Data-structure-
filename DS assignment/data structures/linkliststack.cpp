#include<iostream>
using namespace std;
class node
{
	public:
		int val;
		node *next;	
	
};


class stack
{
public:
node * top;
stack()
{	

top=NULL;	
}	
bool full();
bool empty();
void push();
void pop();
void display();
		
};


//bool stack::full(){
//node * temp=new node;
//	
//if(temp==NULL)
//{
//return true;	
//}	
//else
//{
//return false;
//	
//}
//
//
//}
//
//bool stack::empty()
//{
//	
//if(head==NULL)
//{
//	return true;	
//}
//else
//return false;
//	
//}


void stack::push()
{
	
if(top==NULL)
{
node *temp=NULL;
temp=new node;
cout<<"enter data"<<endl;
cin>>temp->val;
temp->next=top;
top=temp;


	
}
else
{
node *temp=NULL;
temp=new node;
cout<<"enter data"<<endl;
cin>>temp->val;
temp->next=top;
top=temp;

	
}
}
void stack::display()
{
	
node *p;
p=top;
while(p!=NULL)
{
	cout<<"values -- "<<p->val<<endl;
	p=p->next;
	
}	

}


void stack::pop()
{
if(top==NULL)
	{
	cout<<"uderflow"<<endl;
}

else
{
node *temp;
int x=top->val;
top=temp;
top=top->next;
delete(temp);
cout<<"popped element is"<<x<<endl;
}

}
int main()
{
int ch,cont;
stack s;
while(cont!=0){
	
cout<<"Menu"<<endl;
cout<<"\n 1)push  \n 2)pop  \n 3)display"<<endl;
cin>>ch;
if(ch==1){
	s.push();
}	
else if(ch==2)
{
	s.pop();
}
else if(ch==3)
{
	s.display();
}

else
{
	
	cout<<" you enterd something wrong"<<endl;
	}	
	
	
	
}
cout<<"enter 0 to stop"<<endl;
cin>>cont;







}










