#include<iostream>
using namespace std;
int main()
{
	double length,width,area,perimeter;
	cout<<"enter the length:";
	cin>>length;
	cout<<"enter the width:";
	cin>>width;
	area=length*width;
	perimeter=2*(length*width);
	cout<<"area of rectangle="<<area<<endl;
	cout<<"perimeter of rectangle="<<perimeter<<endl;
	return 0;
}
