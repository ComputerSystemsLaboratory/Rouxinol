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



ll num[5];

int main()
{
	while (1) {
		cnt = 0;
		REP(i, 5)
		{
			cin >> num[i];
			if (num[i] == 0) {
				cnt++;
			}
		}
		if (cnt == 5) {
			return 0;
		} else {
			ll a[1000];
			fill(a, a + 1000, 0);
			REP(i, num[0])
			{
				cin >> a[i];
			}

			ll r = num[4];
			ll count = 0;
			ll j = 0;
			while (1) {
				if (count > 10000) {
					count = -1;
					break;
				}
				if (r == a[j]) {
					j++;
				}
				if (j == num[0]) {
					break;
				}
				r = (num[1] * r + num[2]) % num[3];
				count++;
			}
			cout << count << endl;
		}
	}
}