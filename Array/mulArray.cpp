#include<iostream>
using namespace std;
void printArray(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int mulArray(int arr[],int size)
{
	int mul=1;
	for(int i=0;i<size;i++){
	
	{
	
		mul*=arr[i];
		
	}
	
}
return mul;
}
int main ()
{
  int n;
  cout<<"enter the size of array"<<endl;
  cin>>n;
  int arr[n];
  cout<<"enter the value of array"<<endl;
  for(int i=0;i<n;i++)
{
  	cin>>arr[i];
}

cout<<"this is my array"<<endl;
printArray(arr,n);
int totalsum=mulArray(arr,n);
cout<<"the sum of the array is"<<totalsum;
return 0;
}

