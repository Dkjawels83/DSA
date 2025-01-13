#include<iostream>
using namespace std;
int maxRowSum(int mat[][3],int row,int cols)
{
	int maxRowSum=INT_MIN;
	for(int i=0;i<row;i++)
	{
		int rowSum=0;
		for(int j=0;j<cols;j++)
		{
			rowSum+=mat[i][j];
		}
		maxRowSum=max(maxRowSum,rowSum);
	}
	return maxRowSum;
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
int result=maxRowSum(matrix,row,cols);
cout<<"the maximum Row Sum is "<<result<<endl;

}
