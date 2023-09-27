#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>
#include<cstring>
#include<queue>
#include<cmath>
#include<functional>
#include<numeric>
#include<map>
//#include<>
using namespace std;

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define REPS(i, n) for(int i=1;i<=(int)(n);i++)
#define RREP(i, n) for(int i=(int)n-1;i>=0;i--)
#define RREPS(i, n) for(int i=(int)n;i>0;i--)
#define FOR(it, a) for(auto it = a.begin();it!=a.end();++it)
#define RFOR(it, a) for(auto it = a.rbegin();it!=a.rend();++it)
#define ALL(a) a.begin(), a.end()
#define RALL(a) a.rbegin(), a.rend()
#define pb push_back
#define eb emplace_back

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int n, m;

int main(){
	ios::sync_with_stdio(false);
	while(cin >> n >> m, n){
		map<int, int> p;
		ll sum = 0;
		REP(i, n){
			int x, y;
			cin >> x >> y;
			p[y] += x;
			sum += (ll)x*y;
		}
		RFOR(it, p){
			ll t = min(it->second, m);
			sum -= t*(it->first);
			m -= t;
		}
		cout << sum << endl;
	}
	return 0;
}