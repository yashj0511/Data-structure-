#include<iostream>
#include <string>
using namespace std;

class student
{
public:
int marks[100];
	
char rollno[100];

student()
{
int n;
cout<<"enter the number of students"<<endl;
cin>>n;

for(int i=0;i<n+1;i++)
{
	cout<<"enter your roll no"<<endl;
	cin>>rollno[i];
	
	cout<<"enter marks "<<endl;
	cin>>marks[i];
		
}	
	
}
void printdetails();

	
};




void student::printdetails(){
int n;	
for(int i=0;i<n;i++){
	cout<<"The roll number  "<<rollno[i]<<"  has "<<marks[i]<<" marks "<<endl;
	 
}	
}

int main()
{

student mit;

mit.printdetails();		
	
	
	
}
