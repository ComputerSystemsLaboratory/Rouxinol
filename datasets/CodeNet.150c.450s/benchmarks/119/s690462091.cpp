#include <bits/stdc++.h>
using namespace std;

#define INF 1.1e9
#define LINF 1.1e18
#define FOR(i,a,b) for (int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define BIT(x,n) bitset<n>(x)
#define PI 3.14159265358979323846

typedef long long ll;
typedef pair<int,int> P;
typedef pair<ll,P> PP;

//-----------------------------------------------------------------------------

int h,w;
int fld[50][50];
int dx[]={1,-1,0,0,1,1,-1,-1},dy[]={0,0,1,-1,-1,1,-1,1};

void bfs(int sy,int sx) {
	queue<P> q;
	fld[sy][sx]=0;
	q.push(P(sx,sy));
	while(!q.empty()) {
		P p=q.front();q.pop();
		REP(i,8) {
			int nx=p.fi+dx[i],ny=p.se+dy[i];
			if(nx<0||nx>=w||ny<0||ny>=h||fld[ny][nx]==0) continue;
			fld[ny][nx]=0;
			q.push(P(nx,ny));
		}
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	while(true) {
		cin>>w>>h;
		if(w==0) break;
		REP(i,h) REP(j,w) cin>>fld[i][j];
		int cnt=0;
		REP(i,h) {
			REP(j,w) {
				if(fld[i][j]==1) {
					cnt++;
					bfs(i,j);
				}
			}
		}
		cout<<cnt<<endl;
	}

	return 0;
}

