#include <iostream>
#include <cstdio>
#include <cstdlib>
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

//v.erase(unique(v.begin(),v.end()),v.end());

vector<vector<char> > vv;
vector<vint> vis;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int n,m;
void foo(int x,int y,char t){
	if(x>=0&&x<n&&y>=0&&y<m){
		if(vv[x][y]==t&&!vis[x][y]){
			vis[x][y]=1;
			rep(i,4){
				foo(x+dx[i],y+dy[i],t);
			}
		}
	}
}




int main(){
	// int n,m;
	while(cin>>n>>m,n||m){
		// vector<vint> vv;
		initvv(vv,n,m);
		initvv(vis,n,m);
		rep(i,n){
			rep(j,m){
				cin>>vv[i][j];
				vis[i][j]=0;
			}
		}
		int ans=0;
		rep(i,n){
			rep(j,m){
				if(vis[i][j]==0){
					ans++;
					foo(i,j,vv[i][j]);
				}
			}
		}
		cout<<ans<<endl;
	}
}