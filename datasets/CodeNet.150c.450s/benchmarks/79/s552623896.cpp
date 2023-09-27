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

ll v[100];

int main()
{
	while (1) {
		cin >> n >> k;
		if (n == 0 && k == 0) {
			return 0;
		} else {
			vi v(n + 1);
			REP(i, n + 1)
				v[i] = n + 1 - i;
			REP(i, k)
			{
				ll p, c;
				cin >> p >> c;
				REP(j, c)
				{
					ll tmp = v[p + j];
					for (int l = p; l >= 1; l--) {
						v[j + l] = v[j + l - 1];
					}
					v[j + 1] = tmp;
				}
			}
			cout << v[1] << endl;
		}
	}
}