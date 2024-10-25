#include<iostream>
using namespace std;
int main()
{
	int i,sum=0,num;
	cout<<"enter the nth natural number:";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		sum=sum+(i*i);
	}
	cout<<"sum of natural is:"<<sum;
	return 0;
}
