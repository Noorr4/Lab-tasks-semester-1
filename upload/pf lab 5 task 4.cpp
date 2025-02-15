#include<iostream>
using namespace std;
int main()
{
	int num,k,sum=0;
	k=1;
	cout<<"enter the number:";
	cin>>num;
	while(k<num)
	{
		sum=sum+k;
		k=k+2;
	}
	cout<<"sum of odd number : "<<sum;
	return 0;
	
}
