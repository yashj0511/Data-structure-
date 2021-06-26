#include<iostream>
using namespace std;
class dabba{
public:
int top;
const static int max=10;
int arr[max];
 dabba()	
	{
		 top=-1;
	}


bool full(){
	if(top==max-1){
		return true;
	}
	else 
	return false;
	
}

bool empty()
{
	if(top==-1)
	{
		return true;
	}
	return false;
}

void push()
{
	int value;
	if(full())
	{
		
		cout<<"overflow"<<endl;
		
	}
	
	else
	{
		cout<<"enter the value"<<endl;
		cin>>value;
		top=top+1;
		arr[top]=value;
	}
}

int pop()
{
	int e;
	if(empty())
	{
		
	cout<<"stack is empty"<<endl;
		
	}	
	e=arr[top];
	top--;
	cout<<"element "<<e<<" is popped "<<endl;
	
	return e;
	
	
}	

void display()
{
	if(top<0){
		cout<<"sorry"<<endl;
		
	}
	for(int i=top;i>=0;i--)
	{
		cout<<"|"<<arr[i]<<"|"<<endl;
	}
}
	
};


int main()

{
int ch;
dabba s;
for(int i=0;i<50;i++){

cout<<"Menu"<<endl;
cout<<"\n 1 push \n 2 pop \n 3 display \n 4 exit"<<endl;
cin>>ch;
if(ch==1)
{
	s.push();
}
else if(ch==2)
{
	s.pop();
}
else if(ch==3)
{
	s.display();
}
else if(ch==4)
{
	break;
}
else
{
	cout<<"you enterd something wrong"<<endl;

}

}
		
}
