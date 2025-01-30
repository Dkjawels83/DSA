#include<iostream>
using namespace std;
int fact(int a)
{  int result=1;
	for(int i=1;i<=a;i++)
	{
		result=result*i;
		cout<<result<<" ";
	}
	return result;
}
int main()
{
int factorial=fact(5);
cout<<factorial;
}
