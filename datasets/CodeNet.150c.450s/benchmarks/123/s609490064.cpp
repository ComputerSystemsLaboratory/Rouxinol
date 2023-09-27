#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int p;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		for (int j = 2; j < int(sqrt(p) + 1); j++)
		{
			if (p % j == 0)
			{
				count++;
				break;
			}
		}
	}
	cout << n - count << endl;
}
