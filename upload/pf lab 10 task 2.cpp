#include<iostream>
using namespace std;
int compare(int x,int y, int z)
{
	if(x>y&&x>z)
	{
		cout<<"first number is greatest";
	}
	else if(y>x&&y>z)
	{
		cout<<"second number is the greatest"<<endl; // new change happen
	}
	else
	{
		cout<<"third is the grestest"<<endl;
	}
	
}
int main()
{
	int a,b,c;
	cout<<"enter the three numbers:"<<endl;
	cin>>a>>b>>c;
	compare(a,b,c);
}

