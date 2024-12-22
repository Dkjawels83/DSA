#include<iostream>
using namespace std;
int main()
{
	int n=5;
	int arr[5]={2,3,5,7,1};
	int max_sum= INT_MIN;
		for(int st=0;st<n;st++)
		{ int currSum=0;
			for(int end=st;end<n;end++)
			{
				currSum=currSum+arr[end];
				max_sum=max(currSum,max_sum);
				
			}
			
		}
		cout<<"max sum array sum"<<max_sum<<endl;
}
