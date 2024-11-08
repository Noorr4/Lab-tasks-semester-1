#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=0;i<=5;i++)
	{
		cout<<"multiplication table of :"<<i<<endl;
		for(j=1;j<=10;j++)
	    {
		cout<<i<<"*"<<j<<"="<<i*j<<endl;
    	}
	}
}