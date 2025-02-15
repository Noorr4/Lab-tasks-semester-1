#include<iostream>
using namespace std;
int main()
{
	float temp,sum,aveg,i;
	for(i=1;i<=7;i++)
	{
		cout<<"enter the temperature:";
		cin>>temp;
		sum=sum+temp;
		aveg=sum/7;
	}
	cout<<"the average temperature is:"<<aveg<<"C";
}
