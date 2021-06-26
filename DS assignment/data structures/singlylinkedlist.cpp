#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;
class node
{	
 
		public:
		string bookname,author,publisher;
	    int price;
	    int data;
           node *next;
          
};
 
 
 class book
 {
 	
 	private: 		
 		node *head;
 		
 	 public:
 	 	book
		  {
 	 		head=NULL;
		  }
 	 	void addbook();
 	 	void display();
 	 	void search();
 	
 };
	
void book::addbook()

{
	
 int no;
 int choice=1;
 node *temp=NULL;
 node *p=NULL;
 	
 	while(choice!=0)
	 {
	 		
 		if(head==NULL)
		 {
 			 head= new(node);
 				cout<<"enter the bookname"<<endl;
 				cin>>head->bookname;
 				cout<<"enter the book author"<<endl;
 				cin>>head->author;
 				cout<<"enter the publisher"<<endl;
 				cin>>head->publisher;
 				cout<<"enter the price"<<endl;
 				cin>>head->price;
 				
 			 
 			  head->next=NULL;
 			 
 			p=head;
		 }
		 
		 	 
		 else
		 {
		       temp =new (node);
		      	cout<<"enter the bookname"<<endl;
		      	cin>>temp->bookname;
		      	cout<<"enter the book author"<<endl;
		      	cin>>temp->author;
		      	cout<<"enter the publisher"<<endl;
		      	cin>>temp->publisher;
		      	cout<<"enter the price"<<endl;
		      	cin>>temp->price;
		       
		      temp->next=NULL;
			   	p->next=temp;
			   	p=temp;
		  	
		 }
 		   
   cout<<"if you want to continue press 1 otherwise 0"<<endl;
 		   cin>>choice;
 
	
		}	
	
}
void book::display()
{
	node *p=NULL;
	p=head;
		
 	while(p!=NULL)
	 {
	cout<<"bookname is"<<p->bookname<<endl;
	
 		
 	
 		
	 }	
	
	
}


//void linked_list::insat1()
//{
//	
//node *temp=NULL;
//temp=new(node);
//cout<<"enter the employee you want to insert at top"<<endl;
//cin>>temp->data;
//
//
//temp->next=NULL;
//temp->next=head;
//head=temp;
//
//
//	
//}
//
//
//
//void linked_list::insatend()
//{
//	node *p=NULL;
//	node *temp =NULL;
//	temp=new(node);
//	p=head;
//	while(p->next!=NULL)
//	{
//		p=p->next;
//	}
//	cout<<"enter the employee id you want to insert at end"<<endl;
//	cin>>temp->data;
//	
//	
//	
//	temp->next=NULL;
//	p->next=temp;
//	p=p->next;
//	
//	
//}
// 
//void linked_list::insatposn()
//{
//	
//int posn_num;
//int i=0;
//node *p=NULL;
//node *temp=NULL;
//p=head;
//temp=new(node)	;
//cout<<"enter the position at which you want to insert(index start from 0)"<<endl;
//cin>>posn_num;
//for(i=0;i<posn_num-1;i++){
//	p=p->next;
//	
//}
//cout<<"enter the employee id you want to insert"<<endl;
//cin>>temp->data;
//temp->next=p->next;
//p->next=temp;
//	
//	
//	
//	
//}
//
//void linked_list::deletenode()
//{
//	int del_posn;
//node *p=NULL;
//cout<<"enter the index of id which you want to delete(index of list start from 0)"<<endl;
//cin>>del_posn;
//p=head;
//for(int i=0;i<del_posn-1;i++)
//{
//	p=p->next;
//}
//p->next=p->next->next;	
//	
//}

void book::search()
{
	int s;
	cout<<"enter the Employee id you want to search"<<endl;
	cin>>s;
	node *p=NULL;
	p=head;	
	int flag=0;
	while(p->next!=NULL){
		
		if(p->data==s)
		{
			cout<<"employee is present "<<endl;
			break;
			flag=1;
			break;
		}
		else
		{
			p=p->next;
		}
		
		
	
		
	}

}






 int main()
 {
 	int k;	
 		int code;
book b1;
cout<<"how many times you want to run the code"<<endl;
cin>>code;
for(int i=0;i<code;i++)
{
	
cout<<"Welcome to Yashj motors admin control panel "	<<endl;

cout<<"   menu "<<endl;
cout<<"1----  register all employees "	<<endl;
cout<<"2---- add new employee id at perticular position in the list"<<endl;
cout<<"3---- add new employee at beginning of list"<<endl;
cout<<"4---- add new employee at end"<<endl;
cout<<"5---- display employee list"<<endl;
cout<<"6---- fire employee"<<endl;
cout<<"7---- search employee"<<endl;



cin>>k;
if(k==1){
	l1.create();
}
else if(k==2)	

{
	l1.insatposn();
}
else if (k==3)
{
	l1.insat1();
}
else if(k==4)	{
	l1.insatend();
}
	
	else if(k==5){
		l1.display();
	}
	else if(k==6)
	{
	l1.deletenode();
		
	}
	else if(k==7)
	{
		l1.search();
	}
	else
	cout<<"you enterd something wrong"<<endl;
	
}



 
 	
 	
 	
 

 	
 	
 }

