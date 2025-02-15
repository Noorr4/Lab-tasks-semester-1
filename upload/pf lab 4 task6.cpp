#include<iostream>
using namespace std;
int main()
{
	int score;
	cout<<"enter your score in exam is: ";
	cin>>score;
	if(score>=90)
	cout<<"grade A";
	else
	{
		if(score>=80&&score<=89)
		{
			if(score>=85)
			cout<<"grade B+";
			else
			cout<<"Grade B";
		}
		if(score>=70&&score<=79)
		{
			if(score>=75)
			cout<<"grade C++";
			else
			cout<<"grade C";
		}
	}
	if(score>=60&&score<=69)
	cout<<"grade D";
	else
	{
	if(score<60)
	cout<<"grade F";
    }
	return 0;
}
