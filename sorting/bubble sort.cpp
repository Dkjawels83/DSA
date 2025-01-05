#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
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
int main(){
	int n=8;
	int arr[]={9,5,7,6,8,1,3,2};
	bubbleSort(arr,n);
	printArray(arr,n);
	return 0;
	
	
	
}
