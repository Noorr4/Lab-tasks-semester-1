#include<iostream>
using namespace std;
int main()
{
	int mid,x,key,s,e;
	bool found=false;
	cout<<"enter the limit:";
	cin>>x;
	int arr[x];
	cout<<"enter the elements of array:";
	for(int i=0;i<x;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the element which is to be searched:";
	cin>>key;
	s=0;
	e=x;
	while(s<=e)
	{
		mid=s+e/2;
		if(arr[mid]==key)
		{
			cout<<mid;
			found=true;
			break;
		}
		else if(arr[mid]>key)
		{
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
	}
	if(!found)
	{
		cout<<"value not found";
	}
	
}
