#include<iostream>
using namespace std;
int sortColors(int arr[],int n)
{
	int mid=0,low=0,high=n-1;
	while(mid<=high)
	{
		if(arr[mid]==0)
		{
			swap(arr[low],arr[mid]);
			mid++,low++;
		}
		else if(arr[mid]==1)
		{
			mid++;
		}
		else{
			swap(arr[mid],arr[high]);
			high--;
		}
	}
}

void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	
	int size;
	cout<<"enter the size of array"<<endl;
	cin>>size;
	int arr[size];
	cout<<"enter the element of the array only 0s,1s and 2s"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"the unsorted array is ";
	printArray(arr,size);
	cout<<endl;
	sortColors(arr,size);
    cout<<"sorted array is ";
    printArray(arr,size);
}
