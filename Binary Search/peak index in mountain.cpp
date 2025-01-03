#include<iostream>
using namespace std;
int MountainPeakIndex(int arr[],int n)
{
	int st=1;int end=n-2;
	while(st<=end)
	{
		int mid=st+(end-st)/2;
		if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1])
		{
			return mid;
		}
		else if(arr[mid+1]>arr[mid])
		{ 
		st=mid+1;
		}
		else{
			end=mid-1;
		}
	}
	return -1;
}
int main()
{
	int size;
	cout<<"enter the numbers of array "<<endl;
	cin>>size;
	int arr[size];
	cout<<"enter the value of array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"the array is"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<" "<<arr[i];
	}
	cout<<endl;
	int result=MountainPeakIndex(arr,size);
	cout<<"the peak index in a mountain array"<<result<<endl;
	return 0;
	
}
