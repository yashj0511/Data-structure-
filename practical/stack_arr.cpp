#include<iostream>
using namespace std;

class stack{
	public:
		int data;
		int arr[10];
		int top;
		stack()
		{
			top=-1;
		}
		void push();
		void pop();
		void display();
		
		
};

void stack::push()
{
if(top>9)
{
cout<<"stack is full"<<endl;
	
}	

else
{
	
	top++;
	cout<<"enter the data"<<endl;
	cin>>arr[top];
	
}
	
}

void stack::pop()
{cout<<"element "<<arr[top]<<" is popped "<<endl;
	top=top-1;
	
}  
void stack::display()
{
	for(int i=top;i>=0;i--)
	{
		cout<<"element is "<<"| "<<arr[i]<<" |"<<endl;
	}
} 


  
int main()
{

stack s1;

s1.push();
s1.push();
s1.push();
s1.display();
s1.pop();
s1.display();





return 0;	
}
