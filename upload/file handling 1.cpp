#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int a,b,sum;
	cout<<"enter the two numbers:";
	cin>>a>>b;
	sum=a+b;
	ofstream file;
	file.open("newfile.txt");
	file<<"writing in a file";
	file<<"\nmanuplicating data:"<<sum;
	cout<<"\n writing in a file:";
	cout<<"\nthe sum is:"<<sum;
	if(sum>=10)
	{
		file<<"\n sum is valid";
		cout<<"\n sum is valid";
	}
	else
	{
		file<<"\n sum is invalid";
		cout<<"\n sum is invalid";
	}
	file<<"the series is:";
	cout<<"the series is:";
	for(int i=0;i<9;i++)
	{
		file<<"\n"<<i;
		cout<<"\n"<<i;
	}
	file.close();
}
