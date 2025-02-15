#include<iostream>
using namespace std;
int tempopinion(int temp)
{
	if(temp<10)
	{
		cout<<"cold";
	}
	else if(temp>=20&&temp<=30)
	{
		cout<<"OK";
	}
	else if (temp>30)
	{
		cout<<"hot";
	}
}
int main()
{
	int T;
	cout<<"enter the temperature:";
	cin>>T;
	tempopinion(T);
}
