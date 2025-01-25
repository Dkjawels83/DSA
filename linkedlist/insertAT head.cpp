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
void insertathead(node* &head, int d)
{
	node*temp=new node(d);
	temp->next=head;
	head=temp;
}
void print(node* &head)
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main()
{
	node* node1=new node(10);
	node* node2=new node(12);
	
	
	node*head=node1;
	node1->next=node2;
	print(head);
	cout<<endl;
	insertathead(head,15);
	insertathead(head,16);
	cout<<"singly linked list after the insert a value at head"<<endl;
	print(head);
	return 0;
}
