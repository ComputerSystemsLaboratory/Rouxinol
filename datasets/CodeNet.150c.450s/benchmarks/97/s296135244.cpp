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

int dy[] = { 0,1,0,-1 };
int dx[] = { -1,0,1,0 };


int main()
{
	while (1) {
		cin >> n;
		if (n == 0) {
			return 0;
		} else {
			if (n == 1) {
				cout << 1 << ' ' << 1 << endl;
			} else {
				ll x[205] = { 0 }, y[205] = { 0 };
				REP(i, n - 1)
				{
					ll a, b;
					cin >> a >> b;
					x[i + 1] = x[a] + dx[b];
					y[i + 1] = y[a] + dy[b];
				}
				ll xma = 0, xmi = 0, yma = 0, ymi = 0;
				REP(i, n - 1)
				{
					xma = max(xma, x[i + 1]);
					xmi = min(xmi, x[i + 1]);
					yma = max(yma, y[i + 1]);
					ymi = min(ymi, y[i + 1]);
				}
				cout << xma - xmi + 1 << ' ' << yma - ymi + 1 << endl;
			}
		}
	}
}