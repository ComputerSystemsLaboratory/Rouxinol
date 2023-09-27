#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)
#define each(itr,v) for(auto itr:v)
#define pb(s) push_back(s)
#define mp(a,b) make_pair(a,b)
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl
#define maxch(x,y) x=max(x,y)
#define minch(x,y) x=min(x,y)
#define uni(x) x.erase(unique(all(x)),x.end())
#define exist(x,y) (find(all(x),y)!=x.end())
#define bcnt(x) bitset<32>(x).count()

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
typedef pair<P, int> PPI;
typedef pair<ll, ll> PL;
typedef pair<P, ll> PPL;

#define INF INT_MAX/3

#define MAX_N 1000

int w,h;
string s[22];
bool vis[22][22];

int d[]={-1,0,1,0,-1};

int dfs(int y,int x){
	int res=1;
	vis[y][x]=true;
	rep(i,4){
		int nx=x+d[i],ny=y+d[i+1];
		if(nx<0||nx>=w||ny<0||ny>=h||s[ny][nx]=='#')continue;
		if(!vis[ny][nx])res+=dfs(ny,nx);
	}
	return res;
}

int main(){
	cin.sync_with_stdio(false);
	while(1){
		cin>>w>>h;
		if(w==0)break;
		int sw,sh;
		rep(i,h){
			cin>>s[i];
			rep(j,w){
				if(s[i][j]=='@'){
					sw=j; sh=i;
				}
			}
		}
		memset(vis,0,sizeof(vis));
		cout<<dfs(sh,sw)<<endl;
	}
	return 0;
}