#include<iostream>
using namespace std;
int main()
{
	int entryfee=600,snackcost=900,numberofstudents,price,totalcost;
	string students[100];
	cout<<"\t\t Game Night Event\t\t"<<endl;
	cout<<"enter the number of students who are attending the game night event:";
	cin>>numberofstudents;
	if(numberofstudents<=15)
	{
		cout<<"\nenter the name of students:"<<endl;
		cin.ignore();
		for(int i=0;i<numberofstudents;i++)
		{
			cout<<"enter the name of student:"<<i+1<<":";
			getline(cin,students[i]);
		}
		cout<<"\nstudents name for the event"<<endl;
		for(int i=0;i<numberofstudents;i++)
		{
			cout<<"student:"<<i+1<<"["<<students[i]<<"]"<<endl;
		}
		for(int i=0;i<numberofstudents;i++)
		{
			price=entryfee+snackcost;
			cout<<students[i]<<":"<<i+1<<"(entryfee+snackcost):"<<price<<endl;
			totalcost+=price;
			
		}
		cout<<"\ntotal cost of all students:"<<totalcost;
		
	}
	else
	{
		cout<<"\ninvalid:"<<numberofstudents<<"Error not more students are allowed.";
	}
}
