#include<iostream>
using namespace std;
int main()
{
	int marks1,marks2,marks3,averg_marks;
	cout<<"enter the marks in first subject:";
	cin>>marks1;
	cout<<"enter the marks in second subject:";
	cin>>marks2;
	cout<<"enter the marks in third subject:";
	cin>>marks3;
	averg_marks=marks1+marks2+marks3/3;
	cout<<"average marks of three subjects:"<<averg_marks<<endl;
	if (averg_marks>=90)
	cout<<"grade A";
	else if (averg_marks>=80)
	cout<<"grade B";
	else if (averg_marks>=70)
	cout<<"grade C";
	else if (averg_marks>=60)
	cout<<"grade D";
	else if (averg_marks<60)
	cout<<"grade F";
	return 0;
}
