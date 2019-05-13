#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a;
	cout << "Counting..." << endl;
	for (a = 1; a <= 10; a++)
	{
		cout << a << ",";
		if (a == 10)
		break;
	}
	for (a=12; a<=30; a += 2)
	{
		if (a == 30)
		{
			cout << "30" << endl;
			continue;
		}
		else
		{
			cout << a << ",";
		}
	}
	_getch();
	return 0;
}