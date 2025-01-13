#include<iostream>
using namespace std;
bool linearseacrh2D(int mat[][3],int row,int cols,int key)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<cols;j++)
		{
			if(mat[i][j]==key)
			{
		return true;
			}
		}
		return false;
	}
}

int main()
{
	int matrix[3][3];
	int row=3;
	int cols=3;
for(int i=0;i<row;i++)
{
	for(int j=0;j<cols;j++)
	{
	cin>>matrix[i][j];
	}
	cout<<endl;
}
for(int i=0;i<row;i++)
{
	for(int j=0;j<cols;j++)
	{
	cout<<" "<<matrix[i][j];
	}
	cout<<endl;
}
int key=linearseacrh2D(matrix,row,cols,5);
cout<<key<<endl;
if(key==1)
{
	cout<<"key is presented"<<endl;	
}
else{
	cout<<"key is not found"<<endl;
}
return 0;
}
