#include<iostream>
using namespace std;
struct budget
{
	string bugetitem[3]={"rent","electricity","gas"};
	float arr[3][12];
	int data()
	{
		cout<<"enter the buget data for each iteam\n";
		for(int i=0;i<3;i++)
		{
			cout<<bugetitem[i]<<":\n";
			for(int j=0;j<12;j++)
			{
				cout<<"month "<<j+1<<":"<<"enter the value:";
				cin>>arr[i][j];
			}
		}
		
	}
};
int main()
{
	budget budget1;
	budget1.bugetitem;
	budget1.arr;
	budget1.data();
}
