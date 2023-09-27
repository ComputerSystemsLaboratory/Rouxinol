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


int main()
{
	while (1) {
		cin >> n >> m;
		if (n == 0 && m == 0) {
			return 0;
		} else {
			ll ans = n*n + m*m;
			ll ansa = 1000, ansb = 1000, ansans = 10000000;
			FOR(i, 1, 150)
			{
				FOR(j, i + 1, 150)
				{
					ll temp = i*i + j*j;
					if (ans > temp || (ans == temp && i <= n)) continue;
					if (temp < ansans || (temp == ansans && i < ansa)) {
						ansa = i;
						ansb = j;
						ansans = temp;
					}
				}
			}
			cout << ansa << " " << ansb << endl;
		}
	}
}