#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	long int a, b;
	while (cin >> a >> b)
	{
		if (a < b) swap(a, b);
		//?????§??¬?´???°
		for (int i = 1; i <= a; i++)
		{
			if (a % i == 0 && b % (a / i) == 0)
			{
				cout << a / i << " ";
				break;
			}
		}
		//????°???¬?????°
		for (int i = 1; i <= b; i++)
		{
			if ((a * i) % b == 0)
			{
				cout << a * i << endl;
				break;
			}
		}
	}

	return 0;
}