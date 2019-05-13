#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int a, b;
	float c, d;
	c = 2.5;
	cout << "Please enter x: "; cin >> a;
	switch (a)
	{
	case 1:
		cout << "Please enter y: "; cin >> b;
		if (1 < b < 5)
		{
			cout << fixed << showpoint << setprecision(2) << "V = " << a* b*c;
		}
		else if (b >= 5)
		{
			cout << fixed << showpoint << setprecision(2) << "V = " << a + (b / c);
		}
		else
		{
			cout << fixed << showpoint << setprecision(2) << "V = " << a+b+c;
		}
		break;
	case 2:
		cout << "Please enter y: "; cin >> b;
		if (b <= 5)
		{
			d = abs(a - b);
			cout << fixed << showpoint << setprecision(2) << "V = " << d / c;
		}
		else
		{
			cout << fixed << showpoint << setprecision(2) << "V = " << a - (sqrt(b + c));
		}
		break;
	default:
		cout << "Please enter y: "; cin >> b;
		cout << fixed << showpoint << setprecision(2) << "V = " << a+b+c;
	}
	_getch();
	return 0;
}
