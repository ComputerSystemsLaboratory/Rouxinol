#include<bits/stdc++.h>
#include<stdio.h>
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

ll a[100005];

int main()
{
	while (1) {
		cin >> n;
		if (n == 0) {
			return 0;
		} else {
			fill(a, a + 100005, 0);
			int  h, m, s, h1, m1, s1;
			REP(i, n)
			{
				scanf("%d:%d:%d%d:%d:%d", &h, &m, &s, &h1, &m1, &s1);
				a[h * 3600 + m * 60 + s]++;
				a[h1 * 3600 + m1 * 60 + s1]--;
			}
			ll mx = 0;
			REP(i, 100005)
			{
				if (i) {
					a[i] += a[i - 1];
				}
				mx = max<ll>(mx, a[i]);
			}
			cout << mx << endl;
		}
	}
}