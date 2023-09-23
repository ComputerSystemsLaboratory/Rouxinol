#include<bits/stdc++.h>
using namespace std;
const long long INF = 1e7+1;
const long long MOD = 1000000007;
const long double PI = 3.1415926;
#define FOR(i,r,n) for(ll i = (ll)(r); i < (ll)(n); i++)
#define RFOR(i,r,n) for(ll i=(ll)(n-1);i>=r;i--)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n)
#define ALL(x) x.begin(),x.end()
#define RALL(x) x.rbegin(),x.rend()
typedef long long int ll;
typedef vector<ll> vi;
typedef vector < pair<ll, ll > > vp;
typedef vector <string> vs;
typedef vector <char> vc;
typedef list <ll> lst;

ll n,m, k, ans = 0, sum = 0, cnt = 0;
string s;
char c;

/*--------------------template--------------------*/

ll a[21][21];

int main()
{
	while (1) {
		cin >> n;
		if (n == 0) {
			return 0;
		} else {
			memset(a, 0, sizeof(a));

			REP(i, n)
			{
				ll x, y;
				cin >> x >> y;
				a[y][x] = 1;
			}

			ll x = 10, y = 10;
			ll cnt = 0;

			ll m;
			cin >> m;
			REP(i, m)
			{
				char c;
				ll step;
				cin >> c >> step;
				REP(j, step)
				{
					if (c == 'N') { y++; } else if (c == 'S') { y--; } else if (c == 'E') { x++; } else { x--; }

					if (a[y][x]) {
						a[y][x] = 0;
						cnt++;
					}
				}
			}

			if (cnt == n) {
				cout << "Yes" << endl;
			} else {
				cout << "No" << endl;
			}
		}
	}
}