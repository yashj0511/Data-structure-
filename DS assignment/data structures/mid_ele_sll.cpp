#include<iostream>
#include<stdlib.h>

using namespace std;


class node
{
	
		public:
			
	       int data;
           node *next;
          
};
 
 
 class linked_list
 {
 	
 	private:
 		node *head;
 		
 		
 	 
 	 public:
 	 	linked_list(){
 	 	
 	 		head=NULL;
		  }
 	 	void create();
 	 	void display();
 	 	void getmiddle();
 };
	
void linked_list::create()
{
	
		int no;
 int choice=1;
 node *temp=NULL;
 node *p=NULL;
 	
 	
 	while(choice!=0)
	 {
	 	
 		cout<<"enter the number"<<endl;
 		cin>>no;
 		if(head==NULL)
		 {
 			 head= new(node);
 			
 			 head->data=no;
 			 
 			  head->next=NULL;
 			 
 			p=head;
		 }
		 
		 
		 
		 
		 else
		 {
		 		 
		       temp =new (node);
		      
		       temp->data=no;
		      temp->next=NULL;
			   	p->next=temp;
			   	p=temp;
		 
		 }
 		   
   cout<<"if you want to continue press 1 otherwise 0"<<endl;
 		   cin>>choice;
 	
		}	
	
}



void linked_list::display()
{
	node *p=NULL;
	p=head;

		
 	while(p!=NULL)
	 {
 		
 		cout<<"numbers are-  "<<p->data<<endl;
 		p=p->next;
 		
 		
	 }	
	
	
}




void linked_list::getmiddle()
{
	
int mid;	
node *p;
p=head;
int length=0;

while(p->next!=NULL)
{
p=p->next;
length=length+1;
	
}

p=head;

mid=length/2;
for(int i=0;i<mid;i++){
	
p=p->next;
	
		
}
cout<<"the of mid element is value is"<<p->data<<endl;


}

				
 int main()
 {
 	
 	
int length;
int k;	
 		int code;
linked_list l1;
while(code!=0){
cout<<"   menu "<<endl;
cout<<"1----  create "	<<endl;

cout<<"2---- display "<<endl;

cout<<" 3---find middle"<<endl;

cin>>k;

if(k==1){
	l1.create();
}
else if(k==2){
	l1.display();
}
else if(k==3){
	l1.getmiddle();
}
else{
	cout<<"you entered something wrong"<<endl;
}

	cout<<"press 0 to stop otherwise enter any number"<<endl;
 	cin>>code;
}

}
