#include <iostream>
#include <algorithm>

#include <string.h>

using namespace std;

#define MAX_D 100000
#define MAX_N 1000000
#define MAX_F 200

#define INF 100000000

int main()
{
	static int N[MAX_D], F[MAX_F], dp1[MAX_N], dp2[MAX_N];

	int c = 0;

	for (int i = 0; i < MAX_N; i++) { dp1[i] = INF; dp2[i] = INF; }

	while (true)
	{
		cin >> N[c];

		if (N[c] == 0) { break; }

		c++;
	}

	int max = *max_element(N, N + c);

	for (int i = 1; i < MAX_F; i++)
	{
		F[i] = i * (i + 1) * (i + 2) / 6;
	}

	dp1[0] = 0;
	dp2[0] = 0;

	for (int i = 1; i <= max; i++)
	{
		for (int j = 1; j < MAX_F; j++)
		{
			if (i < F[j])
			{
				goto Exit1;
			}
			else
			{
				if (dp1[i - F[j]] + 1 < dp1[i])
				{
					dp1[i] = dp1[i - F[j]] + 1;
				}
			}

		Exit1:;
		}
	}

	for (int i = 1; i <= max; i++)
	{
		for (int j = 1; j < MAX_F; j++)
		{
			if (F[j] % 2 == 1)
			{
				if (i < F[j])
				{
					goto Exit2;
				}
				else
				{
					if (dp2[i - F[j]] + 1 < dp2[i])
					{
						dp2[i] = dp2[i - F[j]] + 1;
					}
				}
			}

		Exit2:;
		}
	}

	for (int i = 0; i < c; i++)
	{
		cout << dp1[N[i]] << ' ' << dp2[N[i]] << endl;
	}

	return 0;
}