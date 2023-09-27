#include<iostream>
using namespace std;

int main()
{
	int n,k;

	int suu[100000 + 100] = { 0 };
	int a;
	int i;
	int mx;

	cin >> n >> k;

	while (n != 0 && k != 0)
	{
		for (i = 1; i <= n; i++)
		{

			cin >> a;

			suu[i] = a + suu[i - 1];

		}

		for (i = k; i <= n; i++)
		{
			if (mx < suu[i] - suu[i - k])
			{
				mx = suu[i] - suu[i - k];
			}

		}

		cout << mx << endl;


		cin >> n >> k;
		mx = 0;
	}
	return 0;
}