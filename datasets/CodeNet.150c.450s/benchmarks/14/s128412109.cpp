#include "iostream"
using namespace std;

int main()
{
	int x, a;
	cin >> x;
	for (int i = 1; i <= x; i++)
	{
		if (i % 3 == 0)
		{
			cout << " " << i;
		}
		else
		{
			a = i;
			do
			{
				if (a %10==3)
				{
					cout << " " << i;
					break;
				}
				a /= 10;
			} while (a);
		}
	}
	cout << endl;
}
