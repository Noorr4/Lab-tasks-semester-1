#include<iostream>
using namespace std;
struct value
{
	int number[20];
	int entervalue()
	{
		cout<<"enter the values:"<<endl;
		for(int i=0;i<20;i++)
		{
			cout<<"value:"<<i+1<<":";
			cin>>number[i];
		}
	}
	int greatest()
		{
		   	int max=number[0];
		   	for(int i=0;i<20;i++)
		   	if(number[i]>max)
		   	{
		   		max=number[i];
			   }
			   cout<<"\nThe greatestnumber is:"<<max;
		}
    	
};
int main()
{
     value value1;
     value1.number;
     value1.entervalue();
     value1.greatest();
}
