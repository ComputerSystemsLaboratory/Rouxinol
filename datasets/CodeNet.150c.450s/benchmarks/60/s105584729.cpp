#include<bits/stdc++.h>
const long long INF = INT_MAX / 2;
const long long MOD = 1000000007;
const long double PI = 3.1415926;
#define FOR(i,r,n) for(ll i = (ll)(r); i < (ll)(n); i++)
#define RFOR(i,r,n) for(ll i=(ll)(n-1);i>=r;i--)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n+1)
#define RREP(i,n) RFOR(i,0,n)
#define ALL(x) x.begin(),x.end()
#define RALL(x) x.rbegin(),x.rend()
#define ll long long int
using namespace std;
ll ans = 0, sum = 0, n, k, cnt = 0, w, h;
string s;
vector<ll> v;
vector < pair<ll, ll > > vp;
vector<vector<ll> > vv(50, vector<ll>(50, INF));
vector<string> vs;
vector<char> vc;
set<ll> st;
map<char, ll> mp;

/*--------------------template--------------------*/

int main()
{
	cin >> n;
	ll d[100][100];
	REP(i, n) REP(j, n) d[i][j] = 0;
	REP(i,n)
	{
		cin >> w >> k;
		REP(j, k) {
			cin >> h;
			d[i][h - 1] = 1;
		}
	}
	
	REP(i, n) {
		REP(j, n)
		{
			if (j) cout << ' ';
			cout << d[i][j];
		}
		cout << endl;
	}
}