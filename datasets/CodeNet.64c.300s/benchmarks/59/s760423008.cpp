#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
	int n;
	int data[10000];
	cin >> n;
	int primenum = n;
	for (int i = 0; i < n; i++)
	{
		cin >> data[i];
	}

	int max = data[0];
	for (int i = 1; i < n; i++)
	{
		if (max < data[i])
		{
			max = data[i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		int d = 2;

		if (d > sqrt(data[i]))
		{
			primenum = primenum;
		}
		else
		{
			while (d <= sqrt(data[i]))
			{
				if (data[i] % d == 0)
				{
					primenum--;
					break;
				}
				d++;
			}
		}
	}

	cout << primenum << endl;

	cin >> n;

	return 0;
}