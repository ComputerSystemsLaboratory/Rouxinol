#include<bits/stdc++.h>
using namespace std;
const long long INF = 1e7 + 1;
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

ll n, m, k, ans = 0, sum = 0, cnt = 0;
string s;
char c;

/*--------------------template--------------------*/

typedef pair<int, int> pii;

ll DP[105][105];
ll p[105];

ll f(ll r, ll c)
{
	ll mi = INF;
	REP(i, c - r)
	{
		mi = min(mi, DP[r][r + i] + DP[r + i + 1][c] + p[r - 1] * p[r + i] * p[c]);
	}
	return mi;
}

int main()
{
	cin >> n;
	REP(i, n+1)
	{
		DP[i][i] = 0;
	}
	cin >> p[0] >> p[1];
	REP(i, n - 1)
	{
		cin >> k >> p[i+2];
	}
	REP(i, n - 1)
	{
		DP[i + 1][i + 2] = p[i] * p[i + 1] * p[i + 2];
	}
	REP(i, n - 2)
	{
		//REP(j, 3 + i, n + 1)
		for(int j=3+i;j<=n;j++)
		{
			DP[j - 2 - i][j] = f(j - 2 - i,j);
		}
	}
	
	cout << DP[1][n] << endl;

	return 0;
}