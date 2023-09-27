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

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	ll h,w,n;
	cin>>h>>w>>n;
	vector<vector<char>> m(h,vector<char>(w));
	REP(i,h) REP(j,w) cin>>m[i][j];
	ll ret=0;
	REP(i,n) {
		vector<vector<ll>> dir(h,vector<ll>(w,INF));
		queue<P> q;
		REP(j,h) REP(k,w) {
			if(i==0) {
				if(m[j][k]=='S') {
					dir[j][k]=0;
					q.push(P(j,k));
				}
			} else {
				if(m[j][k]=='0'+i) {
					dir[j][k]=0;
					q.push(P(j,k));
				}
			}
		}
		while(!q.empty()) {
			P p=q.front();
			q.pop();
			ll dx[]={1,0,-1,0};
			ll dy[]={0,1,0,-1};
			REP(j,4) {
				ll nx=p.first+dx[j];
				ll ny=p.second+dy[j];
				if(nx>=0&&nx<h&&ny>=0&&ny<w&&m[nx][ny]!='X'&&dir[nx][ny]==INF) {
					q.push(P(nx,ny));
					dir[nx][ny]=dir[p.first][p.second]+1;
				}
			}
		}
		REP(j,h) REP(k,w) {
			if(m[j][k]=='1'+i) ret+=dir[j][k];
		}
	}
	cout<<ret<<endl;
}