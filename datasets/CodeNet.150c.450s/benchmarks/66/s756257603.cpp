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
	bool flag = 0;
	cin >> n;
	vs vans(n);
	REP(i, n) cin >> vans[i];
	cin >> m;
	vs  v(m);
	REP(i, m) cin >> v[i];
	REP(i, m)
	{
		REP(j, n)
		{
			if (v[i] == vans[j]) {
				if (flag == 0) {
					cout << "Opened by " << v[i] << endl;
					flag = 1;
				} else if (flag == 1) {
					cout << "Closed by " << v[i] << endl;
					flag = 0;
				}
				break;
			}
			if (j == n - 1) {
				cout << "Unknown " << v[i] << endl;
			}
		}
	}
}