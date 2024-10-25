#include<iostream>
using namespace std;
int main()
{
	char ch;
	int i=1;
	while(true)
	{
		cout<<"\nMenu:\n";
		cout<<"1. Print Hello\n";
		cout<<"2. print World\n";
		cout<<"3.Exit\n";
		cout<<"enter e for exit";
		cin>>ch;
		if(ch=='e'||ch=='E')
			break;
	}
		cout<<"goodbye because you enter exit";
}
