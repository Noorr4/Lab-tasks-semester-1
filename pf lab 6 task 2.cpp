#include<iostream>
using namespace std;
int main()
{
	\\ some changes made on git hub.com
	int password, i=1;
	do
	{
		cout<<"enter the password:";
		cin>>password;
		i++;
	}
		
	while(password>0&&i<=3);
	if(password>0)
	cout<<"access garanted";
	else
	cout<<"access not found";
}
