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
#define INF 1000000000ll
#define MOD 1000000007ll
#define EPS 1e-8
#define REP(i, m) for(long long i=0; i<m; ++i)
#define FOR(i, n, m) for(long long i=n; i<m; ++i)
#define ALL(v) v.begin(), v.end()
#define pb push_back
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;

vector<vector<char> > m;
vector<vector<bool> > used;
int w,h;
void dfs(P p) {
	used[p.first][p.second]=true;
	int dh[]={1,0,-1,0};
	int dw[]={0,1,0,-1};
	REP(i,4) {
		P np=P(p.first+dh[i],p.second+dw[i]);
		if(np.first>=0&&np.first<h&&np.second>=0&&np.second<w&&m[np.first][np.second]=='.'&&!used[np.first][np.second]) dfs(np);
	}
}
int main() {
	ios::sync_with_stdio(false);
	int h,w,n;
	cin>>h>>w>>n;
	vector<string> m(h);
	REP(i,h) cin>>m[i];
	P sp=P(-1,-1);
	REP(i,h) REP(j,w) {
		if(m[i][j]=='S') {
			sp.first=i;
			sp.second=j;
		}
	}
	int tgt=1;
	ll res=0;
	while(tgt<=n) {
		int dh[]={1,0,-1,0};
		int dw[]={0,1,0,-1};
		vector<vector<int> > d(h,vector<int>(w,INF));
		queue<P> q;
		q.push(sp);
		d[sp.first][sp.second]=0;
		while(!q.empty()) {
			P p=q.front();
			q.pop();
			if(m[p.first][p.second]==(char)('0'+tgt)) {
				sp.first=p.first;
				sp.second=p.second;
				res+=d[p.first][p.second];
				break;
			}
			REP(i,4) {
				ll nh=p.first+dh[i];
				ll nw=p.second+dw[i];
				if(nh>=0&&nh<h&&nw>=0&&nw<w&&m[nh][nw]!='X'&&d[nh][nw]==INF) {
					d[nh][nw]=d[p.first][p.second]+1;
					q.push(P(nh,nw));
				}
			}
		}
		++tgt;
	}
	cout<<res<<endl;
}