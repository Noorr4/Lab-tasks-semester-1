#include<iostream>
using namespace std;
int main()
{
	int num,secretnumber,i=1;
	cout<<"enter the secret number:";
	cin>>secretnumber;
	while(true)
	{
		cout<<"the guess of secret number:";
		cin>>num;
		if(num==secretnumber)
		break;
	}
	cout<<"the secret number guess by user is:"<<num;
}
