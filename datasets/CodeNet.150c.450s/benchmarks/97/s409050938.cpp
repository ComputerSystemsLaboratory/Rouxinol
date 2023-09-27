#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<cstring>
#include<queue>
#include<stack>
#include<cstdio>
#include<iomanip>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)	
#define show1d(v) rep(i,v.size())cout<<" "<<v[i];cout<<endl;
#define show2d(v) rep(i,v.size()){rep(j,v[i].size())cout<<" "<<v[i][j];cout<<endl;}cout<<endl;
using namespace std;
typedef long long ll;
typedef int Def;
typedef pair<Def,Def> pii;
typedef vector<Def> vi;
typedef vector<vi> vvi;
typedef vector<pii> vp;
typedef vector<string> vs;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
Def inf = sizeof(Def) == sizeof(ll) ? 2e18 : 1e9+10;
int main(){
	int n;
	while(cin>>n,n){
		vi x(n-1),d(n-1);
		rep(i,n-1)cin>>x[i]>>d[i];
		vvi dp(500,vi(500,-1));
		dp[250][250]=0;
		rep(q,n-1){
			rep(i,500)rep(j,500)if(dp[i][j]==x[q]){
				dp[i+dx[d[q]]][j+dy[d[q]]]=q+1;
			}
		}
		int out[4]={-inf,inf,-inf,inf};
		rep(i,500)rep(j,500)if(dp[i][j]+1){
			out[0]=max(out[0],i);
			out[1]=min(out[1],i);
			out[2]=max(out[2],j);
			out[3]=min(out[3],j);
		}
		cout<<(out[2]-out[3]+1)<<" "<<(out[0]-out[1]+1)<<endl;
	}
}









