#include<iostream>
#include<string>
#include<cctype>
using namespace std;
bool isAlphanumeric(char ch)
{
	if(ch>='0' && ch<='9' || tolower(ch)>='a' && tolower(ch)<='z')
	{
		return true;
	}
	return false;
}
bool isPalindrome(string s)
{
	int st=0,end=s.length()-1;
	while(st<end)
	{
		if(!isAlphanumeric(s[st]))
		{
			st++;
			continue;
		}
		if(!isAlphanumeric(s[end]))
		{
			end--;
			continue;
		}
		if(tolower(s[st])==tolower(s[end]))
		{
			st++;
			end--;
		}
		else
		return false;
	}
	return true;
	
}
int main()
{
	string str;
	cout<<"enter a string"<<endl;
	getline(cin,str);
	cout<<"string is "<<str<<endl;
	if(isPalindrome(str))
	{
		cout<<"yes it is a palindrome string"<<endl;
	}
	else 
	cout<<"NO it's not a palindrome string"<<endl;
	
}
