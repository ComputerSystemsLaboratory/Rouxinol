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


int main(void)
{
	ll y[150], m[150], d[150];

	cin >> n;
	REP(i, n)
	{
		cin >> y[i] >> m[i] >> d[i];
	}

	REP(i, n)
	{
		ll day = 0;

		if (y[i] % 3 == 0) {
			day += ((20 - d[i] + 1) + ((10 - m[i]) * 20));
		} else {
			if (m[i] % 2 == 1) {
				day += (20 - d[i] + 1);
				day += ((10 - m[i]) / 2 + 1) * 19 + ((10 - m[i]) / 2) * 20;
				day += 5;
			} else {
				day += (19 - d[i] + 1);
				day += ((10 - m[i]) / 2) * 20 + ((10 - m[i]) / 2) * 19;
				day += 5;
			}
		}
		ll year = (1000 - y[i] - 1);
		day += (((year / 3) * 200) + ((year - year / 3) * 195));

		cout << day << endl;
	}
}