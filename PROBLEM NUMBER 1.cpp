#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	char a; 
	double b, c;
	cout << "Hello there customer, which package did you purchase?   ";   cin >>   a;
	switch (a)
	{
	case ('A'):
	case ('a'):
		cout << "For Package A, For P995/mo 10 hrs of access are provided. Additional hours are P20/hr. \n";
		cout << "How many hours did you use?  "; cin >> b;

		if (b<= 10)
		{
			c = 995;
			cout << "You're total amount due is: " << c << ".00";
		}
		else
		{
			 c = (995 + ((b - 10) * 20));
			cout << "You're total amount due is: " << fixed << showpoint << setprecision(2) << c;
		}
		break;
	case ('B'):
	case ('b'):
		cout << "For Package B,  For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr. \n";
		cout << "How many hours did you use?  "; 	cin >> b;
		if (b <= 20)
		{
			c = 1495;
			cout << "You're total amount due is: " << c << ".00";
		}
		else
		{
			c = (1495 + ((b - 20) * 10));
			cout << "The total amount due is: " << fixed << showpoint << setprecision(2) << c;
		}
		break;
	case ('C'):
	case ('c'):
		cout << "For Package C, For P1995/mo of unlimited access is provided. \n";
		c = 1945;
		cout << "You're total amount due is: " <<c<< ".00";
		break;
	default:
		cout << "INVALID";
		break;
	}


	_getch();
	return 0;
}