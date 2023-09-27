#include<bits/stdc++.h>
using namespace std;
const long long INF = 1e9+1;
const long long MOD = 1000000007;
const long double PI = 3.1415926;
#define FOR(i,r,n) for(ll i = (ll)(r); i < (ll)(n); i++)
#define RFOR(i,r,n) for(ll i=(ll)(n-1);i>=r;i--)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n)
#define ALL(x) x.begin(),x.end()
#define RALL(x) x.rbegin(),x.rend()
#define ll long long int
typedef vector<ll> vi;
typedef vector < pair<int, int > > vp;
typedef vector <string> vs;
typedef vector <char> vc;
//ll n, k, ans = 0, sum = 0, cnt = 0;
string s;
char c;

/*--------------------template--------------------*/


struct item
{
	int value, weight;
};


int main() {
	int c[105][10005];
	item item[105];
	int n, w;
	cin >> n >> w;
	REP(i, n) c[i][0] = 0;
	REP(i, w) c[0][i] = 0;
	FOR(i, 1, n + 1) {
		int a, b;
		cin >> a >> b;

		item[i].value = a;
		item[i].weight = b;
		//cout << item[i].value << item[i].weight << endl;
	}
	FOR(i, 1, n + 1) {
		FOR(j, 1, w + 1) {
			c[i][j] = c[i - 1][j];
			if (item[i].weight > j) continue;
			c[i][j] = max(c[i - 1][j], c[i - 1][j - item[i].weight] + item[i].value);
		}
	}
	cout << c[n][w] << endl;
}