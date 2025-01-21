#include<iostream>
#include<string>
using namespace std;
class student{
	public:
	string name;
    int age,roll_number;
    string grade;
	};
int main()
{
	student s1;
	s1.name="rohit";
	s1.age=21;
	s1.roll_number=121;
	s1.grade="A+";
	cout<<s1.name<<endl;
	cout<<s1.age<<endl;
	cout<<s1.roll_number<<endl;
	cout<<s1.grade<<endl;
}
