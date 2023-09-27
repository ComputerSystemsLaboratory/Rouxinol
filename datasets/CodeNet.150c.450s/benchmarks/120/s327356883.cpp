#include "bits/stdc++.h"
#define in std::cin
#define out std::cout
#define rep(i,N) for(int i=0;i<N;++i)
typedef long long int LL;

int R, C, a[11][11234];
int f[11][11234], cou, res, ans;

int main()
{
	while (true)
	{
		R = C = 0;
		memset(a, 0, sizeof(a));
		memset(f, 0, sizeof(f));
		cou = res = ans = 0;

		in >> R >> C;
		if (R == 0 && C == 0) { break; }
		rep(i, R) { rep(j, C) { in >> a[i][j]; } }

		rep(b, (1 << R))
		{
			res = 0;
			rep(x, R) { rep(y, C) { f[x][y] = a[x][y]; } }
			rep(i, R)
			{
				if (b & (1 << i))
				{
					rep(j, C) { f[i][j] = (f[i][j] == 0 ? 1 : 0); }
				}
			}
			rep(j, C)
			{
				cou = 0;
				rep(i, R)
				{
					if (f[i][j] == 1) { ++cou; }
				}
				if (cou > R / 2) { res += cou; }
				else { res += (R - cou); }
			}
			ans = std::max(ans, res);
		}

		out << ans << std::endl;
	}
	return 0;
}