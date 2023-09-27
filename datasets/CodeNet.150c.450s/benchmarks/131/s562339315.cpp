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

vi vans;

ll f(ll n, ll m)
{
	if ((ll)log10(n) + 1 != m) {
		n = n*pow(10, m - (ll)log10(n) - 1);
	}
	vi v;
	for (int i = m - 1; i >= 0; i--) {
		ll b = pow(10, i);
		ll a = n / b;
		v.push_back(a);
		n -= a*b;
	}
	sort(ALL(v));
	ll mx = 0;
	REP(i, m)
	{
		mx += v[i] * pow(10, i);
	}
	sort(RALL(v));
	ll mi = 0;
	REP(i, m)
	{
		mi += v[i] * pow(10, i);
	}
	/*cout << mx << ' ' << mi << endl;
	cout << mx - mi << endl;
	cout << endl;*/
	vans.push_back(mx - mi);
	return mx - mi;
}


int main()
{
	while (1) {
		cin >> n >> m;
		vans.push_back(n);
		if (n == 0 && m == 0) {
			return 0;
		} else {
			if (n == 0) {
				cout << 0 << ' ' << 0 << ' ' << 1 << endl;
				vans.clear();
			} else {
				cnt = 0;
				ll p = -1;
				while (1) {
					ll a = f(n, m);
					if (a == 0) {
						cout << vans.size() - 1 << ' ' << 0 << ' ' << 1 << endl;
						vans.clear();
						break;
					}
					REP(i, vans.size() - 1)
					{
						if (a == vans[i]) {
							p = i;
							break;
						}
					}
					if (p != -1) {
						cout << p << ' ' << a << ' ' << vans.size() - 1 - p << endl;
						vans.clear();
						break;
					}
					n = a;
				}
			}
		}
	}
}