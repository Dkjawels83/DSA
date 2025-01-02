#include<iostream>
using namespace std;
int binarySearch( int arr[],int size,int tar)
{
	int st=0;int end=size-1;
	while(st<=end)
	{
		int mid=(st+end)/2;
		if(tar>arr[mid])
		{
			st=mid+1;
		}
		else if(tar<arr[mid])
		{
			mid=mid+1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{    
   

	int size;
	cout<<"enter the size of array"<<endl;
	cin>>size;
	int arr[size];
	cout<<"enter the element of the array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int target;
	cout<<"enter the target value"<<endl;
	cin>>target;
 int result=binarySearch(arr,size,target);
 
	if(result!=-1)
	{
		cout<<"target is found at index "<<result<<endl;
	}
	else{
		cout<<"target is not found"<<endl;
	}
	return 0;
}
