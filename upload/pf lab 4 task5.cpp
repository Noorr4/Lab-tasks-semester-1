#include<iostream>
using namespace std;
int main()
{
	int day;
	cout<<"enter the day number";
	cin>>day;
	switch(day)
	{
		case 1:
			cout<<"Start of the workweek";
			break;
			case 2:
				cout<<"It's tuesday,stay productive";
				break;
				case 3:
					cout<<"Midweek motivation!";
					break;
					case 4:
						cout<<"Almost the weekend.";
						break;
						case 5:
							cout<<"TGIF";
							break;
							case 6:
								cout<<"Relax,its Saturday";
								break;
								case 7:
									cout<<"Enjoy your sunday!";
									break;
									default:
										cout<<"Invalid day selection";
										
	}
	return 0;
}
