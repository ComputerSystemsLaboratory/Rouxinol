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

int n;
bool prime[1000005];

int main()
{
	memset(prime, true, sizeof(prime));
	prime[0] = prime[1] = false;
	for (int i = 2; i*i < 1000005; i++)
	{
		if (prime[i])
		{
			for (int j = 2; i*j < 1000005; j++)
			{
				prime[i*j] = false;
			}
		}
	}
	int a, d, n;
	while (cin >> a >> d >> n, a)
	{
		int cnt = 0;
		while (1)
		{
			if (prime[a])
			{
				cnt++;
				if (cnt == n)
				{
					cout << a << endl;
					break;
				}
			}
			a += d;
		}
	}

	return 0;
}