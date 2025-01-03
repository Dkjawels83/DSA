#include<iostream>
using namespace std;
int singleElement(int arr[],int n)
{
	if(n==1)
	{
		return arr[0];
	}
	int st=0;int end=n-1;
	while(st<=end)
	{
		
		int mid=st+(end-st)/2;
		if(mid==0 && arr[0]!=arr[1])
		{
			return arr[mid];
		}
		if(mid==n-1 && arr[n-1]!=arr[n-2])
		{
			return arr[mid];
		}
		if(arr[mid-1]!=arr[mid]&& arr[mid]!=arr[mid+1])
		{
			return arr[mid];
		}
		if(mid%2==0)
		{
			if(arr[mid-1]==arr[mid])
			{
				end=mid-1;
			}
			else
			{
				st=mid+1;
			}
		}
		else{
			if(arr[mid-1]==arr[mid])
			{
				st=mid+1;
			}
			else{
				end=mid-1;
			}
		}
		
	}
	return -1;
	
	
	
}



int main()
{
  int size;
  cout<<"enter the size of aaray"<<endl;
  cin>>size;
  int arr[size];
  cout<<"enter the value of array"<<endl;
  for(int i=0;i<size;i++)
  {
  cin>>arr[i];
  }	
  cout<<"the array is "<<endl;
  for(int i=0;i<size;i++)
  {
  	cout<<" "<<arr[i];
  }
  cout<<endl;
	  int result= singleElement(arr,size);
	  cout<<"single element in this array is "<<result<<endl;
	  return 0;
}
