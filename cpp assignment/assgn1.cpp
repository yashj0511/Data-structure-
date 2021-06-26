#include<iostream>
using namespace std;

class student
{
	public:
int rollno;
int marks;

student()
{

cout<<"Enter the roll number of student"<<endl;
cin>>rollno;
cout<<"Enter the marks of students"<<endl;
cin>>marks;

}	

	
void display()

{
		
cout<<"The student of roll number "<<rollno<<" has marks "<<marks<<endl;
	
}	
	
	
	
};






int main()
{
	int n,i;
cout<<"enter the number ofstudents in the class"<<endl;
cin>>n;	





	
student mit[n];
for(i=0;i<n;i++)
{

	mit[i].display();

	
}

	
	
}
