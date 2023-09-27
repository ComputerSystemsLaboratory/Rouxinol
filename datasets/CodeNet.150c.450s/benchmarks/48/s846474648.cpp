#include <bits/stdc++.h>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ll long long
#define ALL(a) (a).begin(),(a).end()
#define SORT(v) sort(ALL(v))
//#define scanf scanf_s
typedef pair<int, int> P;

int main()
{
	int n;
	while (cin >> n, n)
	{
		int ans = INF;
		for (int z = 100; z >= 0; z--)
		{
			int e = n;
			e -= z*z*z;
			if (e < 0) continue;
			for (int y = 1000; y >= 0; y--)
			{
				int x = e;
				x -= y*y;
				if (x < 0) continue;
				ans = min(ans, x + y + z);
			}
		}
		cout << ans << endl;
	}


	return 0;
}