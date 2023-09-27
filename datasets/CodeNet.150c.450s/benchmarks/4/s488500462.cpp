#include <iostream>

using namespace std;

int main ()
{
	int a,b,c;

	for (int s = -2; s < 100; s++)
  {

		cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1)
		break;


	if (a == -1)
	{
		cout << 'F';
	}
	else if (b == -1)
	{
		cout << 'F';
	}

	else if (a + b >= 80)
	{
		cout << 'A';
	}

	else if (a + b >= 65)
	{
		cout << 'B';
	}

	else if (a + b >= 50 || c >= 50)
		{
		cout << 'C';
		}

	else if (a + b >= 30 && a > -1 && b > -1)
		{
		cout << 'D';
		}
	else if (a + b < 30 && a > -1 && b > -1)
	{
		cout << 'F';
	}
	cout << endl;
  }
}