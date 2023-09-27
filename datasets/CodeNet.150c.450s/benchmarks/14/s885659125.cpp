#include <iostream>
using namespace std;
int main()
{
	int n, i, x;

	cin >> n;
	i = 1;
	3 <= n <= 10000;

	while (i <= n - 1)
	{
		i++;
		x = i;

		if (x % 3 == 0)
		{
			cout << " " << i;
		}
		else if (x % 10 == 3)
		{
			cout << " " << i;
		}
		else if ((x / 10) % 10 == 3)
		{
			cout << " " << i;
		}
		else if ((x / 100) % 10 == 3)
		{
			cout << " " << i;
		}
		else if ((x / 1000) % 10 == 3)
		{
			cout << " " << i;
		}
	}
	cout << endl;
}