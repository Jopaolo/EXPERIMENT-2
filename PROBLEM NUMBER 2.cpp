#include <iostream>
#include <conio.h>
#include <iomanip> 
using namespace std;

int main()
{
	int a, b, c;
	cout << "Please enter the the meter readings this month :  "; cin >> a; 
	cout << "Please enter the the meter readings from the previous month : "; cin >> b;
	cout << "Please enter your unpaid balance: "; cin >> c; 
	if (c > 0)
	{
		cout << "Your bill is:  " << fixed << showpoint << setprecision(2) << (35+(a*1.10)+(b*1.10)+20+c);
	}
	else
	{
		cout << "Your bill is:  " << fixed << showpoint << setprecision(2) << (35+(a*1.10)+(b*1.10));
	}
	_getch();
	return 0;
}