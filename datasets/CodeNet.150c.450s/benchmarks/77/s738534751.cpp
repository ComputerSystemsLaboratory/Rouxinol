#include <bits/stdc++.h>
const long long INF = LLONG_MAX / 2;
const long long MOD = 1000000007;
const long double PI = 3.1415926;
#define FOR(i, r, n) for(int i=(ll)(r); i<(ll)(n); i++) 
#define REP(i, n) FOR(i, (0), n)
#define ll long long int
using namespace std;
ll ans = 0, sum = 0, n, k, counter = 0, w, h;
string s;
vector<ll> v;
vector<pair<ll, ll>> vp;
//vector<vector<ll>> vv(50, vector<ll>(50, 0));

int main()
{
	while (true)
	{
		cin >> n;
		if (!n) return 0;
		vector<vector<ll>> vv(50, vector<ll>(50, 0));
		counter = 0;
		REP(i, n)
		{
			ll a, b;
			cin >> a >> b;
			vv[a][b] = 1;
		}
		ll m;
		cin >> m;
		ll px = 10, py = 10;
		if (vv[px][py]) counter++;
		REP(i,m)
		{
			char c;
			ll d;
			cin >> c >> d;
			if (c == 'N')
			{
				REP(i, d)
				{
					py++;
					if (vv[px][py])
					{
						counter++;
						vv[px][py] = 0;
					}
				}
			}
			if (c == 'E')
			{
				REP(i, d)
				{
					px++;
					if (vv[px][py])
					{
						counter++;
						vv[px][py] = 0;
					}
				}
			}
			if (c == 'W')
			{
				REP(i, d)
				{
					px--;
					if (vv[px][py])
					{
						counter++;
						vv[px][py] = 0;
					}
				}
			}
			if (c == 'S')
			{
				REP(i, d)
				{
					py--;
					if (vv[px][py])
					{
						counter++;
						vv[px][py] = 0;
					}
				}
			}
		}
		cout << (counter == n ? "Yes" : "No") << endl;
	}
}