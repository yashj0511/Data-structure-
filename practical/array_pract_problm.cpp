#include<iostream>
using namespace std;
void create(int arr[]);

void sum_array(int arr[]);
void multiply_ele(int arr[]);

int main()
{

int arr[5];

create(arr);

sum_array(arr);
multiply_ele(arr);


return 0;
}


void create(int arr)

{

	int n=arr.size()	
	for(i=0;i<n;i++) 
	{
		cout<<"enter the value"<<endl;
		cin>>arr[i];	
	}
	
}

void sum_array(arr)
{
int n= arr.size()	
for(int i=0;i<n;i++){
	
arr[i+1]=arr[i]+arr[i+1];	
	
	}
	cout<<"sum of elements is"<<arr[n];
}

void multiply_ele(arr)
{

int n= arr.size()	

for(int i=0;i<n;i++)
{
arr[i+1]=arr[i]*arr[i+1];
}

cout<<"multiplication of elements is "<<arr[n];
	
}



