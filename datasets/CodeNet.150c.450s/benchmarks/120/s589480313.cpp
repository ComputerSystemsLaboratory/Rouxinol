#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int h, w;
	int s_state[10][10000];

	int cnt,sum,ans;

	int i, j, k;

	while ( (cin >> h >> w) , h)
	{
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < w; j++)
			{
				cin >> s_state[i][j];
			}
		}

		ans = 0;

		for (k = 0; k < (1 << h); k++)
		{
			sum = 0;
			for (i = 0; i < w; i++)
			{
				cnt = 0;
				for (j = 0; j < h; j++)
				{
					cnt += s_state[j][i]^(k>>j&1) ;
				}
				sum += max(cnt, h - cnt);
			}
			ans = max(ans, sum);
		}

		cout << ans << endl;
	}

	return 0;
}
