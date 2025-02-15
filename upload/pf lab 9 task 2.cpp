#include<iostream>
using namespace std;
int main()
{
	int n,x;
	cout<<"enter the number of rows:";
	cin>>n;
	cout<<"\nenter the number of columns:";
	cin>>x;
	int arr[n][x];
	cout<<"\nenter the array in square: ";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<x;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"\n elements in matrix without transpose:\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<x;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n elements in matrix after transpose:\n";	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<x;j++)
		{
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}
}
