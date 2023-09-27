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

ll a[2000000] = { 0 };
ll b[2000000] = { 0 };

int main()
{
	while (1) {
		cin >> n >> m;
		if (n == 0 && m == 0) {
			return 0;
		} else {
			fill(a, a + 2000000, 0);
			fill(b, b + 2000000, 0);
			vi vh(n), vw(m);
			REP(i, n) cin >> vh[i];
			REP(i, m) cin >> vw[i];
			REP(i, n)
			{
				FOR(j, i, n)
				{
					sum = 0;
					FOR(k, i, j+1)
					{
						sum += vh[k];
					}
					a[sum]++;
				}
			}
			REP(i, m)
			{
				FOR(j, i, m)
				{
					sum = 0;
					FOR(k, i, j + 1)
					{
						sum += vw[k];
					}
					b[sum]++;
				}
			}
			ans = 0;
			REP(i, 2000000)
			{
				ans += a[i] * b[i];
			}
			cout << ans << endl;
		}
	}
}