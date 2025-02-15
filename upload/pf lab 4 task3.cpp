#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char op;
	cout<<"enter the two numbers:";
	cin>>a>>b;
	cout<<"enter the user choice operrator:";
	cin>>op;
	switch(op)
	{
		case'+':
			cout<<"addition of two numbers:"<<a+b;
			break;
			case'-':
				cout<<"subtraction of two numbers:"<<a-b;
				break;
				case'/':
					cout<<"division of two numbers:"<<a/b;
					break;
					case'*':
						cout<<"multipication of two numbers:"<<a*b;
						break;
						case'%':
							cout<<"modulas of two numbers:"<<a%b;
							break;
							default:
								cout<<"invalid";
					
	}
	return 0;
}
