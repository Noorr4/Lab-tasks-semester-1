#include<iostream>
using namespace std;
int main()
{
	double temp_in_farhen,temp_in_celsius;
	cout<<"enter the temperature in celsius:";
	cin>>temp_in_celsius;
	temp_in_farhen=(temp_in_celsius*9/5)+32;
	cout<<"temperature in farhen is="<<temp_in_farhen;
	return 0;
}
