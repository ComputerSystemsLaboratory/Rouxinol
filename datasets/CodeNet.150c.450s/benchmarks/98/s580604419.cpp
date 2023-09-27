#include <iostream>

#include <string.h>

using namespace std;

#define MAX_N 100
#define MAX_M 100
#define MAX_D 1000

#define INF 10000000

int main()
{
	int n, m, c = 0;

	int s[MAX_N], t[MAX_M], Answer_s[MAX_D], Answer_t[MAX_D];

	memset(Answer_s, -1, sizeof(Answer_s));
	memset(Answer_t, -1, sizeof(Answer_t));

	while (true)
	{
		cin >> n >> m;

		if (n == 0 && m == 0) { break; }

		int ssum = 0, tsum = 0;

		for (int i = 0; i < n; i++) { cin >> s[i]; ssum += s[i]; }
		for (int i = 0; i < m; i++) { cin >> t[i]; tsum += t[i]; }

		int Answer_sum = INF;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (ssum - s[i] + t[j] == tsum - t[j] + s[i])
				{
					if (Answer_sum > s[i] + t[j])
					{
						Answer_sum = s[i] + t[j];

						Answer_s[c] = s[i];
						Answer_t[c] = t[j];
					}
				}
			}
		}

		c++;
	}

	for (int i = 0; i < c; i++)
	{
		if (Answer_s[i] == -1 && Answer_t[i] == -1)
		{
			cout << -1 << endl;
		}
		else
		{
			cout << Answer_s[i] << ' ' << Answer_t[i] << endl;
		}
	}

	return 0;
}