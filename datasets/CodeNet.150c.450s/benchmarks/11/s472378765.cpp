
#include<iostream>
using namespace std;


int main()
{
	int n, i, j;
	char egara[4] = {'S', 'H', 'C', 'D'};
	int num[4][13] = { 0 };
	char a[100] = { 0 };
	int b[100] = { 0 };

	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i];
	}

	for (i = 0; i < n; i++)
	{
		switch (a[i])
		{
			case 'S':
				for (j = 0; j < 13; j++)
				{
					if (b[i] == j+1)
					{
						num[0][j] = b[i];
					}
				}
				break;
			case 'H' :
				for (j = 0; j < 13; j++)
				{
					if (b[i] == j + 1)
					{
						num[1][j] = b[i];
					}
				}
				break;
			case 'C':
				for (j = 0; j < 13; j++)
				{
					if (b[i] == j + 1)
					{
						num[2][j] = b[i];
					}
				}
				break;
			case 'D':
				for (j = 0; j < 13; j++)
				{
					if (b[i] == j + 1)
					{
						num[3][j] = b[i];
					}
				}
				break;
			default:
				break;
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (num[i][j] == 0)
			{
				cout << egara[i] << " " << j+1;
				cout << endl;
			}
		}
	}

	return 0;
}