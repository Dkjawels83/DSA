#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	return n*fact(n-1);
}
int main ()
{    


int value;
cout<<"enter the value"<<endl;
cin>>value;
	cout<<"the factorial of this value is "<<fact(value)<<endl;
	return 0;

}
