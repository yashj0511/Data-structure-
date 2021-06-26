/*Assignment : collision resolution linear probing chaining , without chaining (with and without
replacement)
Name : Yash C Jaware : C2
Roll No : 142 PRN No : 0120190287
==================================================================================
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
class hashing
{
int hash_t[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int hash_t_with[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int count,count_with;
public:
hashing()
{
count=0;
count_with=0;
}
void without_insert(int val);
void with_insert(int val);
void display();
};
void hashing::without_insert(int val)
{
int key;
key=val%10;
if(hash_t[key]==-1)
{
hash_t[key]=val;
count++; 
}
else
{
for(int i=key+1;i<14;i++)
{
if(count!=10&&i==10)
{
i=-1;
}
else if(count!=10&&hash_t[i]==-1)
{
hash_t[i]=val;
count++;
break;
}
else if(count==10)
{
cout<<"\nIt is full You cannot enter data:-";
break;
}
else
{
continue;
}
}
}
}
void hashing::with_insert(int val)
{
int key,temp;
key=val%10; 
if(hash_t_with[key]==-1)
{
hash_t_with[key]=val;
count_with++;
}
else
{
temp=hash_t_with[key];
hash_t_with[key]=val;

for(int i=key+1;i<14;i++)
{
cout<<i;
if(count!=10&&hash_t_with[i]==-1)
{
hash_t_with[i]=temp;
count_with++;
break;
}
else if(count!=10&&i==10)
{
i=-1;
}
else if(count==10)
{
cout<<"\nIt is full You cannot enter data:-";
break;
}
else
{
continue;
} 
}
}
}
void hashing::display()
{
cout<<"*********************************"<<endl;
cout<<" | "<<"Without"<<"\t|\t"<<"With"<<" | "<<endl;
cout<<"*********************************"<<endl;
for(int j=0;j<=9;j++)
{
cout<<" | \t"<<hash_t[j]<<"\t|\t"<<hash_t_with[j]<<" | "<<endl;
}
cout<<"*********************************"<<endl;
}
int main()
{
hashing sk;
int data,ch,choice=1,option;
do
{
cout<<"\n1.Linear Probing With and Without replacement\n2.Display\n3.Exit\nPlease enter yourchoice: ";
cin>>option;
switch(option)
{
case 1:
{
do
{
cout<<"\nEnter Students marks: :";
cin>>data; 
sk.without_insert(data);
sk.with_insert(data);
cout<<"\nDo you want to enter data press 1 for continue and 0 for exit: ";
cin>>ch;
}while(ch!=0);
break;
}
case 2:
{
sk.display();
break;
}
case 3:
{
choice=0;
break;
}
default:
{
cout<<"You have enter the wrong option plese enter again:";
break;
}
}
}while(choice!=0);
return 0;
}
