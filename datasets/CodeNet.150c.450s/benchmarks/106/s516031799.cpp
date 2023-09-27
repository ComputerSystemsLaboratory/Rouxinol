#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	int i = 0;

	while (true)
	{
		cin >> a >> b >> c;

		if (a <= b)
			break;

	}

	for (int j = a; j <= b; j++)
	{
		if ((c % j) == 0)
			i++;
	}

	cout << i << endl;
}