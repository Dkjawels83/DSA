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
void insertatend(node* tail, int d)
{
	node* temp=new node(d);
	tail->next=temp;
	tail=temp;
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
	
	
	node* head=node1;
	node *tail=node2;
	node1->next=node2;
	cout<<"present linked list ";
	print(head);
	insertatend(tail,14);
	cout<<"after insert the node at the end"<<endl;
	print(head);
}
