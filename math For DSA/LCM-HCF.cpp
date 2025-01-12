#include<iostream>
using namespace std;
int hcf(int a,int b)
{
	while(a>0&& b>0)
	{
		if(a>b)
		{
			a=a%b;
		}
		else{
			b=b%a;
		}
	}
	if(a==0)
	{
		return b;
	}
	else return a;
}
int LCM(int a,int b)
{
	int gcd=hcf(a,b);
	return (a*b/gcd);
}
int main()
{
int a,b;
cout<<"enter the value of a and b"<<endl;
cin>>a>>b;
int result=hcf(a,b);
cout<<"the HCF of these value is"<<result<<endl;
cout<<"the LCM is"<<LCM(a,b)<<endl;
}
