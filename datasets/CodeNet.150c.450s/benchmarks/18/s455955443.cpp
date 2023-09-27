#include <iostream>
#include <algorithm>
using namespace std;

void AOJ0007()
{
	int N;
	cin >> N;
	long money = 100000;
	for (int i = 0; i < N; i++)
	{
		money *= 1.05;
		if (money % 1000 > 0)
		{
			money += (1000 - money % 1000);
		}
	}

	cout << money << endl;
}

int main()
{
	AOJ0007();
	return 0;
}