#include<iostream>
using namespace std;
printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void swapAlternative(int arr[],int size)
{
	for(int i=0;i<size;i+=2)
	{
		if(i+1<size)
		{
			swap(arr[i],arr[i+1]);
		}
	}
}

int main()
{
	int even[8]={1,2,3,4,6,7,8,5};
	int odd[7]={23,45,54,3,4,76,4};
	cout<<"Before Swap"<<endl;
	printArray(even,8);
	swapAlternative(even,8);
	cout<<"After Swap"<<endl;
	printArray(even,8);
		cout<<"Before Swap"<<endl;
			printArray(odd,7);
	swapAlternative(odd,7);
		cout<<"After Swap"<<endl;

	printArray(odd,7);
}
