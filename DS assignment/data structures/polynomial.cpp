#include<iostream>
using namespace std;
class node
{
public:
int patients;//coef
int day;//power
node* next;
};
class disease
{
 public:
 node* head;
 disease()
 {
 head=NULL;
 }
 void sort_create(node *temp)
 {
node* p;
 if(head==NULL)
 {
 head=temp;
 }
 if(temp->day > head->day) 
 {
 temp->next=head;
p=head;
 while(p->next!=NULL)
 {
p=p->next;
 }
 p->next=temp;
head=temp;
 }
else
 {
 if(temp->day==head->day)
 {
 head->patients+=temp->patients;
 }
 else
{ p =
head; int
f=1;

while(1)
{
if(p->day == temp->day)
{
p->patients += temp->patients; f=2; break;
}
else if(p->day < temp->day or p->next ==
head)
{
f=1;
break;
}
p = p->next;
}
if (f == 1)
{
temp->next = p->next;
p->next = temp;
} 
 }
 }
 }
 void add(disease w1, disease w2)
 {
 node* t1=w1.head;
node* t2=w2.head;
node* t3; head=NULL;
 if(w1.head == NULL && w2.head == NULL)
 {
 cout<<"Both Polynomials are empty";
 return;
 }
do
 {
t3=new node; t3->day =
t1->day; t3->patients = t1->patients; t3->next = t3;
sort_create(t3);
t1 = t1->next;
 }while(t1!=w1.head);

do
 {
t3=new node; t3->patients
= t2->patients; t3->day =
t2->day; t3->next = t3;
sort_create(t3);
t2 = t2->next;
}while(t2!=w2.head);
 }
 void multiply(disease w1, disease w2)
 {
 node* t1=w1.head;
node* t2=w2.head;
node* t3; head=NULL; 
 if(w1.head == NULL && w2.head == NULL)
 {
 cout<<"Both Polynomials are empty";
return;
 }

do
 {
 t2 = w2.head;
do{
t3=new node; t3->patients = t1->patients
* t2->patients; t3->day = t1->day + t2->day; t3->next = t3;
sort_create(t3);
t2 = t2->next;
 }while(t2!=w2.head);
t1=t1->next;
 }while(t1!=w1.head);
 }
 void display()
 {
 node * p =head;
do
 {
 cout<<p->patients<<" X^ "<<p->day<<" + ";
p=p->next;
 }while(p->next!=head);
 cout<<p->patients<<" X^"<<p->day<<" = 0 \n";
 }
};
int main()
{ 
disease
p1,p2,p3; int ans;
node *temp;
cout<<"\nWEEK 1:"<<endl;
do
{
temp = new node; cout<<"Enter the day no.:";
cin>>temp->day; 
cout<<"Enter no. of patients onday"<<temp->day<<":"; cin>>temp->patients;
temp->next = temp;
p1.sort_create(temp);
cout<<"Do u want to continue:(1/0):";
cin>>ans;
}
while(ans==1);
p1.display();
cout<<"\nWEEK 2:"<<endl;
do
{
temp = new node; cout<<"Enter the day no.:";
cin>>temp->day;
 cout<<"Enter no. of patients onday"<<temp->day<<":"; cin>>temp->patients;
temp->next = temp;
p2.sort_create(temp);
cout<<"Do u want to continue:(1/0):";
cin>>ans;
}
while(ans==1);
p2.display();
p3.add(p1,p2) ;
p3.display();
p3.multiply(p1,p2);
p3.display();
return 0;
} 
