#include<iostream>
using namespace std;

unsigned long long int sum[100 + 10][21 + 10] = {0};  //unsigned???+??????????????\????????????

int main()
{
	int n;

	int a;
	//int suu[100 + 10];

	int i,j;

	cin >> n;

	cin >> a;
	sum[0][a] = 1;
	for (i = 0; i < n-2; i++)
	{
		cin >> a;
		for (j = 0; j <= 20; j++)
		{
			if (sum[i][j] > 0)
			{
				if (j + a <= 20)
				{
					sum[i + 1][j + a] += sum[i][j];
				}

				if (j - a >= 0)
				{
					sum[i + 1][j - a] += sum[i][j];
				}
			}
		}

	}

	cin >> a;

	cout << sum[n-2][a] << endl;

	return 0;
}