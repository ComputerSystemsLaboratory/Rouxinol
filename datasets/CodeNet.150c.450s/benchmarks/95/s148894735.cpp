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
		cin >> n;
		if (n == 0) {
			return 0;
		} else {
			ll a = 0, b = 0;
			bool flg = 0;
			cnt = 0;
			REP(i, n)
			{
				cin >> s;
				if (s == "lu") {
					a = 1;
				} else if (s == "ru") {
					b = 1;
				} else if (s == "ld") {
					a = 0;
				} else if (s == "rd") {
					b = 0;
				}
				if (flg == 0) {
					if (a == 1 && b == 1) {
						cnt++;
						flg = 1;
					}
				}
				if (flg == 1) {
					if (a == 0 && b == 0) {
						cnt++;
						flg = 0;
					}
				}
			}
			cout << cnt << endl;
		}
	}
}