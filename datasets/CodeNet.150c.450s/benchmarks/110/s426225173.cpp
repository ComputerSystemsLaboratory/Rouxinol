#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repb(i,a,b) for(int i=a;i>=b;i--)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define int long long
#define fi first
#define se second
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

const int INF=1e7;
int h,w,n;
char m[1001][1001];
pii c[11];
int d[1001][1001];
int dy[4]={0,0,1,-1};
int dx[4]={1,-1,0,0};
int ans=0;

void bfs(){
	rep(i,0,h){
		rep(j,0,w){
			if(m[i][j]=='S'){
				c[0].fi=i; c[0].se=j;
			}else if('1'<=m[i][j] && m[i][j]<='9'){
				c[m[i][j]-'0'].fi=i;
				c[m[i][j]-'0'].se=j;
			}
		}
	}
	rep(i,0,n){
		rep(j,0,h) rep(k,0,w) d[j][k]=INF;
		d[c[i].fi][c[i].se]=0;
		int gy=c[i+1].fi;
		int gx=c[i+1].se;
		//o("    "<<i<<" "<<c[i].fi<<c[i].se);
		queue<pii> q;
		q.push(c[i]);
		while(q.size()){
			pii t=q.front(); q.pop();
			if(t.fi==gy && t.se==gx){
				ans+=d[gy][gx];
				//o("ok");
				break;
			}
			rep(j,0,4){
				int ny=t.fi+dy[j];
				int nx=t.se+dx[j];
				if(0<=ny && ny<h && 0<=nx && nx<w){
					if(m[ny][nx]!='X' && d[ny][nx]==INF){
						d[ny][nx]=d[t.fi][t.se]+1;
						//o(i<<" "<<ny<<" "<<nx<<" "<<d[ny][nx]);
						q.push(pii(ny,nx));
					}
				}
			}
		}
	}
}

signed main(){
	cin>>h>>w>>n;
	rep(i,0,h){
		rep(j,0,w){
			cin>>m[i][j];
		}
	}
	bfs();
	o(ans);
}