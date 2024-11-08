#include<iostream>
using namespace std;
int main()
{
	int sum=0,i,j,n;
	cout<<"enter the integer:";
	cin>>n;
	for(i=n;i>0;i=i/10)
	{
		int digit=i%10;
		for(j=0;j<1;j++)
		sum+=digit;
		
	}
	cout<<"sum of digits :"<<sum<<endl;

}
