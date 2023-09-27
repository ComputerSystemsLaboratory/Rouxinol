#include <iostream>
#include <cstdio>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#include <complex>
#include <map>
#include <climits>
#include <sstream>
using namespace std;

#define reep(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) reep((i),0,(n))
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define EPS 1e-8
#define F first
#define S second
#define mkp make_pair

static const double PI=6*asin(0.5);
typedef long long ll;
typedef complex<double> CP;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vint;
static const int INF=1<<24;

template <class T>
void initvv(vector<vector<T> > &v,int a,int b, const T  &t = T()){
	v.assign(a,vector<T>(b,t));
}
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int main(){
	int H,W;
	int N;
	cin>>H>>W>>N;

	vector<vint> vv;
	initvv(vv,H,W);
	pii pos;
	rep(i,H){
		rep(j,W){
			char t;
			cin>>t;
			if(t=='S'){
				vv[i][j]=0;
				pos.F=i;
				pos.S=j;
			}
			else if(t=='.') vv[i][j]=10;
			else if(t=='X') vv[i][j]=-10;
			else vv[i][j]=t-'0';
		}
	}
	// queue<pii> q;
	ll ans=0;
	rep(i,N){
		queue<pair<pii,int> > q;
		q.push(mkp(pos,0));
		vector<vint> vis;
		initvv(vis,H,W);
		rep(k,H) rep(j,W) vis[k][j]=1;
		while(!q.empty()){
			pair<pii,int> tmp=q.front();
			q.pop();
			if(vv[tmp.F.F][tmp.F.S]==i+1){
				pos=tmp.F;
				ans+=tmp.S;
				break;
			}
			rep(j,4){
				int x=tmp.F.F+dx[j];
				int y=tmp.F.S+dy[j];
				if(x<H&&y<W&&x>=0&&y>=0&&vis[x][y]&&vv[x][y]!=-10){
					q.push(mkp(mkp(x,y),tmp.S+1));
					vis[x][y]=0;
				}
			}
		}
	}
	cout<<ans<<endl;
	// rep(i,H){
		// rep(j,W){
			// cout<<vv[i][j]<<" ";
		// }
		// cout<<endl;
	// }
	// cout<<endl;
}