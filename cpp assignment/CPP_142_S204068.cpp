#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;


class node
{	
 
		public:
		string bookname,author,publisher;
	    int price,quantity;
           node *next;
          
};
 
 
 class book
 {
 	
 	private: 		
 		node *head;
 		
 	 public:
 	 	book()
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
 				cout<<"how much copies of this book are present in the shop"<<endl;
 				cin>>head->quantity;
 			 
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
		      	cout<<"how much copies of this book are present in the shop"<<endl;
 				cin>>temp->quantity;
		       
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
		cout<<" book name is  "<<p->bookname<<endl;
		      	
		cout<<" book author "<<p->author<<endl;
		      
		cout<<"the publisher is "<<p->publisher<<endl;
		      	
		cout<<" price "<<p->price<<endl;
		    
	p=p->next;
	
 	
 		
	 }	
	
	
}


void book::search()
{
	string b_name,b_author;
	cout<<"enter the bookname"<<endl;
	cin>>b_name;
	cout<<"enter the author"<<endl;
	cin>>b_author;
	
	node *p=NULL;
	p=head;	
	int flag=0;
	while(p!=NULL)
	{
		
		if(b_name==p->bookname and b_author==p->author)
		{
			cout<<"Book is found "<<endl;
			
			cout<<"name of the book "<<p->bookname<<endl;
				     	
		    cout<<" book author "<<p->author<<endl;
		      
		    cout<<"the publisher"<<p->publisher<<endl;
		      	
		    cout<<" price "<<p->price<<endl;
		    cout<<p->quantity<<" copies are available of this book"<<endl;
			
			
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


	
for (int i=0;i<100;i++)
{

	
cout<<"Welcome to YashJ book shop "	<<endl;

cout<<"   menu "<<endl;
cout<<"1----  register books "	<<endl;
cout<<"2---- search"<<endl;
cout<<"3---- dispaly all books"<<endl;
cout<<"4-----quit or exit"<<endl;





cin>>k;
if(k==1){
	b1.addbook();
}
else if(k==2)	

{
	b1.search();
}
else if (k==3)
{
	b1.display();
}

else if(k==4)
{
	break;
}
else
{
		cout<<"you enterd something wrong"<<endl;
	
}



}

 
 	
 	
 	
 

}
 
