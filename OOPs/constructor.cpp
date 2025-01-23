#include<iostream>
#include<string>
using namespace std;
class student{
	public:
		string name;
		int rno;
		float gpa;
student(string s,int r,int g)
{
	name=s;
	rno=r;
	gpa=g;
}
};
int main()
{
	student s1("Deepak",76,9.1);
	cout<<s1.name<<endl<<s1.rno<<endl<<s1.gpa<<endl;
}
