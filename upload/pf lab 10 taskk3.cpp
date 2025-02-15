#include<iostream>
using namespace std;
int cube(int &x);
int main()
{
	int a,c;
    for(int i=0;i=true;i++)
    {
    	cout<<"enter the number"<<endl;
	    cin>>a;
	    if(a==0)
	    {
		cout<<"you enter the invalid number"<<endl;
	    break;
	}
	cout<<"the cube of a number:"<<a<<"is"<<cube(a)<<endl;

	}
}
	int cube(int &x)
	{
		int c;
		return x*x*x;
	}
	

