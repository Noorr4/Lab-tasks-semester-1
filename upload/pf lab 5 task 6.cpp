#include<iostream>
using namespace std;
int main()
{
	int balance,withdraw,sb;
	cout<<"enter the balance in your ATM:";
   	cin>>balance;
	for(int k=withdraw;k<balance;k++)
	{
		cout<<"enter the withdrawel amount";
		cin>>withdraw;
		if(withdraw>balance)
		break;
		sb=balance-withdraw;
	}
	cout<<"This time withdraw amount is insuffient"<<endl;
	cout<<"suffient amount this time will be ="<<sb;
	return 0;
}
