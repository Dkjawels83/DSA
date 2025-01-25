#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
	

 node(int data)
{
	this->data=data;
	this->next=NULL;
}

};

int main()
{
	cout<<"single linked list with 2 node "<<endl;
	node* node1=new node(10);
	node* node2=new node(12);
	
	cout<<node1->data<<endl;
	node1->next=node2;
	
	cout<<node2->data<<endl;
		cout<<node2->next;
	
	
	return 0;
}
