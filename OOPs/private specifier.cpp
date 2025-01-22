#include<iostream>
#include<string>
using namespace std;
class employee{
	string name;
	int id;
	int age;
	int salry;
	string town;
	public:
		void setname(string s)
	{
		name=s;
	}
	void setid(int i)
	{
		id=i;
	}
	void setage(int a)
	{
		age=a;
	}
	void settown(string vill)
	{
		town=vill;
	}
	void getname()
	{
		cout<<name<<endl;
	}
	void getid()
	{
		cout<<id<<endl;
	}
	void getage()
	{
		cout<<
		a<<endl;
	}
	void gettown()
	{
		cout<<vill<<endl;
	}
	
};
int main()
{
	employee e1;
	e1.setname("Deepak");
	e1.getname();
	e1.setid(101);
	e1.getid();
	e1.setage(26);
	e1.getage();
	e1.settown("Haridwar");
	e1.gettown();
	
}
