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

ll n, k, ans = 0, sum = 0, cnt = 0;
string s;
char c;

/*--------------------template--------------------*/

int main(void)
{
	ll x[1000], y[1000], s[1000];
	ll temp;
	vp v;
	ll i = 0;

	while (1) {
		while (1) {
			cin >> x[i] >> y[i] >> s[i];
			if (x[i] == 0 && y[i] == 0 && s[i] == 0) {
				break;
			}
			i++;
		}
		n = i;
		REP(i, n)
		{
			ll mx = 0;
			FOR(j, 1, s[i])
			{
				FOR(k, j, s[i])
				{
					temp = j * (100 + x[i]) / 100 + k * (100 + x[i]) / 100;
					if (temp == s[i]) {
						temp = j * (100 + y[i]) / 100 + k * (100 + y[i]) / 100;
						if (temp > mx) {
							mx = temp;
						}
					}
				}
			}
			cout << mx << endl;
		}
		if (i == n) {
			return 0;
		}
	}
}