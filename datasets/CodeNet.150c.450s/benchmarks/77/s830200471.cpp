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

int n;
int x[33],y[33];
int q;

int main(){
	cin.sync_with_stdio(false);
	while(1){
		cin>>n;
		if(n==0)break;
		rep(i,n)cin>>x[i]>>y[i];
		cin>>q;
		int rx=10,ry=10;
		int res=0;
		rep(i,q){
			char dir; int dist;
			cin>>dir>>dist;
			int dx=0,dy=0;
			if(dir=='N'){
				dy=1;
			}else if(dir=='E'){
				dx=1;
			}else if(dir=='W'){
				dx=-1;
			}else{
				dy=-1;
			}
			while(dist--){
				rep(j,n){
					if(rx==x[j]&&ry==y[j]){
						res++;
						x[j]=y[j]=-1;
					}
				}
				rx+=dx; ry+=dy;
			}
			rep(j,n){
				if(rx==x[j]&&ry==y[j]){
					res++;
					x[j]=y[j]=-1;
				}
			}
		}
		if(res==n)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}