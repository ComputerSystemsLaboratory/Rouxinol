#include<iostream>
#include<iomanip>
#include<math.h>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<time.h>
#define INF 1000000000ll
#define MOD 1000000007ll
#define EPS 1e-10
#define REP(i,m) for(long long i=0; i<m; i++)
#define FOR(i,n,m) for(long long i=n; i<m; i++)
#define DUMP(a) for(long long dump=0; dump<(ll)a.size(); dump++) { cout<<a[dump]; if(dump!=n-1) cout<<" "; else cout<<endl; }
#define ALL(v) v.begin(),v.end()
#define pb push_back
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;

/*
 貪欲
 ?決定問題 必ず解に含まれる(含むように変換できる)ものから決めていく みんプロ本選B
 ?最適化問題 任意の解から評価を落とさず解に含められるようなものから決めていく 区間スケジューリングとか
 ?
 */

/*
 DP
 ?DPはある程度決め打ちをするべき(解を帰納的に構成できないか？)
 */

void dfs(ll i, ll j, vector<vector<int>>& c) {
	c[i][j]=0;
	for(ll dx=-1; dx<=1; dx++) {
		for(ll dy=-1; dy<=1; dy++) {
			if(i+dx>=0&&i+dx<(ll)c.size()&&j+dy>=0&&j+dy<=(ll)c[0].size()&&c[i+dx][j+dy]==1) dfs(i+dx,j+dy,c);
		}
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	while(1) {
	ll w,h;
	cin>>w>>h;
		if(w==0&&h==0) break;
	vector<vector<int>> c(h,vector<int>(w));
	REP(i,h) REP(j,w) cin>>c[i][j];
	ll ret=0;
	REP(i,h) REP(j,w) {
		if(c[i][j]==1) {
			ret++;
			dfs(i,j,c);
		}
	}
	cout<<ret<<endl;
	}
}