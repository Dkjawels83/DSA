#include<iostream>
#include<string>
using namespace std;
class student{
	public:
	string name;
	int rollNo;
	float gpa;
	public:
	student()
	{
		//default constructor
	}
	student(string s,int r,float g){
		name=s;
		rollNo=r;
		gpa=g;
	}
	student(string s,float g)
	{
		name=s;
		gpa=g;
	}
};
int main()
{
	student s1;
	s1.name="Deepak ";
	s1.rollNo=15;
	s1.gpa=8.3;
	
	
	student s2("ritik",8.4);//parameterized constructor
	
	student s3("ritik",17,8.4);
	cout<<"default constructor "<<endl;
	cout<<s1.name<<endl<<s1.rollNo<<endl<<s1.gpa<<endl;
	cout<<"parameterized constructor "<<endl;
	cout<<s2.name<<endl<<s2.gpa<<endl;
	cout<<"parameterized constructor with 3 value "<<endl;
	cout<<s3.name<<endl<<s3.rollNo<<endl<<s3.gpa<<endl;
}
