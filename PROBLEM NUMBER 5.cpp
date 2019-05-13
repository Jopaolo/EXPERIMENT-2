#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a, b, c, d, e;
	b = 0;
	c = 1;
	e = 22;
	cout << "Fibonacci numbers:" << endl;
	for (a = 0; a < e; a++)
	{
		if (a <= 1)
		{
			d = a;
			cout << d << ",";
		}
		else
		{
			d = b + c;
			b = c;
			c = d;
			if (d == 10946)
			{
				cout << "10946" << endl;
				continue;
			}
			else
			{
				cout << d << ",";
			}
		}

	}
	_getch();
	return 0;
}