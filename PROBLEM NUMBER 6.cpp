#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a, b, c;
	bool coaster = false;
	do
	{
		c = 0;
		cout << "Enter a number: ";  cin >> b;
		{
			if (b < 1)
			{
				cout << "Thank you!";
				coaster = true;
			}
			else
			{
				for (a = 1; a <= b; ++a)
				{
					c += a;
				}
				cout << "The sum of all whole numbers from 1 to " << b << " is " << c << endl;
				
			}
		}
	}
	while (!coaster);
	_getch();
	return 0;
}