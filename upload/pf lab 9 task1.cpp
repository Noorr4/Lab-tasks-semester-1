#include<iostream>
using namespace std;
int main()
{
	int arr[3];
	cout<<"enter the elements of:\n";
	for(int i=0;i<3;i++)
	{
		cin>>arr[i];
	}
   	cout<<"\nthe elements of array in forward:\n";
	   for(int i=0;i<3;i++)
	{
		cout<<arr[i];
	}
	cout<<"\nthe elements of array in reverse order:\n";
	for(int i=3-1;i>=0;i--)
	{
		cout<<arr[i];
	}
}
