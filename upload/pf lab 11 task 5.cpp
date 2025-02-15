#include<iostream>
using namespace std;
struct currency{
	string currencyname;
	void check()
	{
		if(currencyname=="USD"||currencyname=="usd")
	{
		float amount;
		float pkrupess;
		cout<<"enter the amount in dollar:";
		cin>>amount;
		pkrupess=amount*280.0;
		cout<<"\nthe amount in rupess is:"<<pkrupess;
	}
	else if(currencyname=="pkr"||currencyname=="PKR")
	{
		float amount;
		cout<<"enter the amount in pkr:";
		cin>>amount;
		cout<<"\nthe amount is already in rupess:"<<amount;
	}
	else
	{
		cout<<"invalidentry";
	}
	}
		
};
int main()
{
	currency currency1;
	cout<<"enter the name of currency:";
	cin>>currency1.currencyname;
	currency1.check();
	
		}
