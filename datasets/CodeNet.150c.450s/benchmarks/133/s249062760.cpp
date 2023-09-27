#include<algorithm>
#include<bitset>
#include<cmath>
#include<complex>
#include<deque>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<unordered_map>
#include<unordered_set>
#include<utility>
#include<vector>

using namespace std;
typedef long long ll;

#define REP(i, n) for(ll i=0;i<(ll)(n);i++)
#define RREP(i, n) for(ll i=(ll)(n-1);i>=0;i--)
#define FOR(i, a, b) for(ll i=(ll)(a); i<=(ll)(b); i++)
#define RFOR(i, a, b) for(ll i=(ll)(a);i>=(ll)(b); i--)
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ((ll)(x).size())
#define INF 1000000000000
#define MOD 10000007
#define PB push_back
#define MP make_pair
#define F first
#define S second

signed main()
{
	int D;
	cin >> D;
	vector<int> c(26);
	vector<vector<int>> s(D, vector<int>(26));
	vector<int> t(D);
	vector<int> last_date(26, 0);
	vector<ll> sat(D+1, 0);
	REP(i, 26){
		cin >> c[i];
	}
	REP(i, D){
		REP(k, 26){
			cin >> s[i][k];
		}
	}
	REP(i, D){
		cin >> t[i];
		last_date[t[i]-1] = i+1;
		sat[i] += s[i][t[i]-1];
		REP(k, 26){
			sat[i] -= c[k]*(i+1-last_date[k]);
		}
		sat[i+1] = sat[i];
	}
	REP(i, D){
		cout << sat[i] << endl;
	}
}
