#include<iostream>
using namespace std;
void add(int arr[],int size);
void mul(int arr[],int size);

int main()
{
	int i;
	int arr[5]={1,2,3,4,5};
	for(int i=0;i<5;i++)
	{
		cout<<"element - "<<arr[i]<<endl;
	}
//	add(arr,5);
	mul(arr,5);
	return 0;	
}
	void add(int arr[],int size)
	{
		for(int i=0;i<size;i++)
	{
		arr[i+1]=arr[i]+arr[i+1];
	}
	cout<<"the sum is  "<<arr[4];
  }

	void mul(int arr[],int size)
	{
		for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
		arr[i+1]=(arr[i])*(arr[i+1]);
	}
	cout<<"the product is  "<<arr[size-1];
  }

