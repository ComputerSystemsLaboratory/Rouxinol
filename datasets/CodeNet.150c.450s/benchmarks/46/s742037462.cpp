
#include<iostream>
using namespace std;

int main()
{
	int n[100], x[100];
	int i = 0;
	int cnt = 0;

	while (1)
	{
		cin >> n[i] >> x[i];

		if (n[i] == 0 && x[i] == 0)
		{
			break;
		}

		for (int j = 1; j <= n[i]; j++)
		{
			for (int k = 1; k <= n[i]; k++)
			{
				for (int l = 1; l <= n[i]; l++)
				{
					if (j < k && k < l)
					{
						if (j + k + l == x[i])
						{
							cnt++;
						}
					}
				}
			}
		}
		cout << cnt << endl;
		i++;
		cnt = 0;
	}

	return 0;
}