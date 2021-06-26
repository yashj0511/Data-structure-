

#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{
public:
int power;
int coff;
node* next;
};
class Covid
{
private:
node* head;
node* head1;
node* head2;
public:
Covid(void)
{
cout<<"\n\n ";
head = NULL;
head1 = NULL;
head2 = NULL;
}
void Week_1(void)
{
if(head == NULL)
{
cout<<"\t\t\tEnter The Data For Week 1-> \n\n ";
for(int i=0;i<7;i++)
{
node* temp = new node();
temp->power=i;
if(i==0)
{
cout<<"\nEnter The Number Of Infected Person For Day"<<i<<"(SUNDAY) -> ";
cin>>temp->coff;
}
else if(i==1)
{
cout<<"\nEnter The Number Of Infected Person For Day"<<i<<"(MONDAY) -> ";
cin>>temp->coff;
}else if(i==2)
{
cout<<"\nEnter The Number Of Infected Person For Day"<<i<<"(TUESDAY) -> ";
cin>>temp->coff;
}else if(i==3)
{
cout<<"\nEnter The Number Of Infected Person For Day"<<i<<"(WEDNESDAY) -> ";
cin>>temp->coff;
}
else if(i==4)
{
cout<<"\nEnter The Number Of Infected Person For Day"<<i<<"(THURSDAY) -> ";
cin>>temp->coff;
}
else if(i==5)
{
cout<<"\nEnter The Number Of Infected Person For Day"<<i<<"(FRIDAY) -> ";
cin>>temp->coff;
}
else if(i==6)
{
cout<<"\nEnter The Number Of Infected Person For Day"<<i<<"(SATURDAY) -> ";
cin>>temp->coff;
}
cout<<"\n";
if(head == NULL)
{
head = temp;
temp->next= head;
}
else
{
node* ptr = head;
while(ptr->next!=head)
{
ptr = ptr->next;
}
ptr->next = temp;
temp->next = head;
}
}
}
else
{
cout<<"\n\n\nDATA ALREADY FILLED FOR WEEK 1 \n\n";
}
}
void Week_2(void)
{
if(head1==NULL)
{
cout<<"\t\t\tEnter The Data For Week 2-> \n\n ";
for(int i=0;i<7;i++)
{
node* temp = new node();
temp->power=i;
if(i==0)
{
cout<<"\nEnter The Number Of Infected Person For Day"<<i<<"(SUNDAY) -> ";
cin>>temp->coff;
}
else if(i==1)
{
cout<<"\nEnter The Number Of Infected Person For Day"<<i<<"(MONDAY) -> ";
cin>>temp->coff;
}else if(i==2)
{
cout<<"\nEnter The Number Of Infected Person For Day"<<i<<"(TUESDAY) -> ";
cin>>temp->coff;
}else if(i==3)
{
cout<<"\nEnter The Number Of Infected Person For Day"<<i<<"(WEDNESDAY) -> ";
cin>>temp->coff;
}
else if(i==4)
{
cout<<"\nEnter The Number Of Infected Person For Day"<<i<<"(THURSDAY) -> ";
cin>>temp->coff;
}
else if(i==5)
{
cout<<"\nEnter The Number Of Infected Person For Day"<<i<<"(FRIDAY) -> ";
cin>>temp->coff;
}
else if(i==6)
{
cout<<"\nEnter The Number Of Infected Person For Day"<<i<<"(SATURDAY) -> ";
cin>>temp->coff;
}
cout<<"\n";
if(head1 == NULL)
{
head1 = temp;
temp->next= head1;
}
else
{
node* ptr = head1;
while(ptr->next!=head1)
{
ptr = ptr->next;
}
ptr->next = temp;
temp->next = head1;
}
}
}
else
{
cout<<"\n\n\nDATA ALREADY FILLED FOR WEEK 2 \n\n";
}
}
void print(void)
{
cout<<"\t\t\tThe Data Of Week 1 Is Shown Below -> \n\n\n";
node* print = head;
do
{
cout<<print->coff<<"X^"<<print->power;
if(print->next!=head)
{
cout<<" + ";
}
print=print->next;
}while(print!=head);
print = head1;
cout<<"\n\n\n";
cout<<"\t\t\tThe Data For Week 2 Is Shown Below -> \n\n\n";
do
{
cout<<print->coff<<"X^"<<print->power;
if(print->next!=head1)
{
cout<<" + ";
}
print=print->next;
}while(print!=head1);
 }
 void person_to_person()
 {
 cout<<"Spread Of Disease From person to Person Is Shown Below -> \n\n\n";
 node* w =head;
 node* w1=head1;
 do
 {
 cout<<w->coff+w1->coff<<"X^"<<w1->power;
 w=w->next;
 w1=w1->next;
 if(w!=head)
 {
 cout<<" + ";
}
}while(w!=head && w1!=head1);
 }
 void community_spread()
 {
 cout<<"Analysis Of Communal Spread Of Disease Is Shown Below -> \n\n\n";
node* a=head;
node* b;
do
{
b=head1;
do
{
node* temp = new node();
temp->coff=a->coff*b->coff;
temp->power=a->power+b->power;
if(head2 == NULL)
{
head2 = temp;
temp->next = head2;
}
else
{
node* t = head2;
while(t->next!=head2)
{
t=t->next;
}
t->next=temp;
temp->next=head2;
}
b=b->next;
}while (b!=head1);
a=a->next;
}while(a!=head);
int power,coff;
node* ptr= head2;
node* nxt;
do
{
nxt=ptr->next;
while(nxt!=head2){
if(ptr->power <= nxt->power)
{
power=ptr->power;
coff=ptr->coff;
ptr->power = nxt->power;
ptr->coff = nxt->coff;
nxt->coff = coff;
nxt->power = power;
}
nxt = nxt->next;
}
ptr=ptr->next;
}while(ptr!=head2);
node* temp;
ptr=head2;
do
{
nxt = ptr->next;
while(nxt!=head2)
{
if(ptr->power == nxt->power)
{
ptr->coff = ptr->coff + nxt->coff;
ptr->next = nxt->next;
}
nxt=nxt->next;
}
ptr = ptr->next;
}while(ptr!=head2);
node* t = head2;
do
{
cout<<t->coff<<"X^"<<t->power;
t=t->next;
if(t!=head2)
{
cout<<" + ";
}
}while(t!=head2);
}
};
int main()
{
cout<<"\n\n\n\t\t******** COVID 19 ANALYSIS ********";
Covid Infection;
int choice;
int loop = 0;
do
{
cout<<"\n\n\n1.ENTER DATA FOR WEEK_1 \n\n2.ENTER DATA FOR WEEK_2\n\n3.PRINT THE DATA FOR THESE 2 WEEKS \n\n4.SEE PERSON TO PERSON SPREAD OF INFECTION FOR WEEK_3 \n\n5.ANALYSIS OF COMMUNITY SPREAD \n\n\n\t\tENTER THE option ->";



cin>>choice;
switch(choice)
{
case 1:
system("CLS");
cout<<endl;
cout<<"\n\n";
Infection.Week_1();
break;
case 2:
system("CLS");
cout<<endl;
cout<<"\n\n";
Infection.Week_2();
break;
case 3:
system("CLS");
cout<<endl;
cout<<"\n\n";
Infection.print();
break;
case 4:
system("CLS");
cout<<endl;
cout<<"\n\n";
Infection.person_to_person();
break;
case 5:
system("CLS");
cout<<endl;
cout<<"\n\n";
Infection.community_spread();
break;
default:
cout<<"ERROR->INVALID INPUT";
}
cout<<"\n\n\n\n\t\tTO CONTINUE PLEASE ENTER 0 ->";
cin>>loop;
system("CLS");
}while(loop == 0);
cout<"*******************PROGRAME EXITED*******************";
return 0;
}

