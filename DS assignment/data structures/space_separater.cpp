#include<iostream>
#include<stdlib.h>

using namespace std;


class node
{
	
		public:
			
	       char data;
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
 	 	void find_mid();
 };
	
void linked_list::create()
{
	
		char no;
 int choice=1;
 node *temp=NULL;
 node *p=NULL;
 	
 	
 	while(choice!=0)
	 {
	 	
 		cout<<"enter letter"<<endl;
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
 		   
   cout<<"if you want to continue creating press 1 otherwise 0"<<endl;
 		   cin>>choice;
 	
		}	
	
}



void linked_list::display()
{int n;
	node *p=NULL;
	p=head;
int length=0;
	cout<<"enter n(length of each word)"<<endl;
	cin>>n;

	
while(p!=NULL){
	length=length+1;
	p=p->next;
}	

p=head;
for(int i=0;i<length+1;i++)
{
	
if(i%n==0){
	
	cout<<"  "<<p->data;
	p=p->next;
	
	
	
		
	

}	
	
else{

		cout<<p->data;
		p=p->next;
}		
	
	
}	
	
}




void linked_list::find_mid()
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



cin>>k;

if(k==1){
	l1.create();
}
else if(k==2){
	l1.display();
}

else{
	cout<<"you entered something wrong"<<endl;
}

	cout<<"press 0 to stop programme otherwise enter any number"<<endl;
 	cin>>code;
}

}
