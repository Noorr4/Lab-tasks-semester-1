#include<iostream>
using namespace std;
int main()
{
	int popcornprice=200,ticketprice=300,numberofuser,totalcost,price=0;
	string user[100];
	cout<<"\t\t QAWALI NIGHT\t\t"<<endl;
	cout<<"\nenter the number of students that are attending qawali night";
	cin>>numberofuser;
	
	if(numberofuser<=10)
	{
		cout<<"\nenter the name of user:"<<endl;
		cin.ignore();
		for(int i=0;i<numberofuser;i++)
		{
			cin.ignore();
			cout<<"Enter the name of user "<<i+1<<":";
			cin.ignore();
			getline(cin,user[i]);
        }
        cout<<"user names for the event:"<<endl;
        for(int i=0;i<numberofuser;i++)
        {
        	cout<<"user"<<i+1<<":"<<"["<<user[i]<<"]"<<endl;
				
		}
		for(int i=0;i<numberofuser;i++)
		{
			price=ticketprice+popcornprice;
			cout<<"user"<<i+1<<":"<<user[i]<<":"<<price<<endl;
			totalcost=totalcost+price;
		}
        cout<<"\ntotal cost= "<<totalcost;
	}
	else
	{
		cout<<"\ninvalid"<<numberofuser<<"Error not more students are allowed.";
	}
}
