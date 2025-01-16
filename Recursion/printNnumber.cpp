#include<iostream>
using namespace std;
printnums(int n)
{
	if(n==1)
	{   
	   
		return 1;
	}
	else
	cout<<n<<" "<<endl;
	printnums(n-1);
}
int main()
{
	printnums(10);
	return 0;
}
