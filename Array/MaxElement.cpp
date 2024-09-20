#include<iostream>
using namespace std;
//Get max element function
int getMax(int arr[],int n)
{
	int largest=arr[0];
for(int i=0;i<n;i++)
{

	if(largest>arr[i])
	{
	
	largest=arr[i];
}
}
return largest;
}
int main()

{
	int size;
	cout<<"enter the number of the array"<<endl;
	cin>>size;
	int arr[size];
	cout<<"enter the elment of the array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int max_element=getMax(arr,size);
	cout<<"the maximam number is"<<endl<<max_element;
	
	
	
}
