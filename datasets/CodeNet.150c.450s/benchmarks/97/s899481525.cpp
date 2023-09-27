#include<iostream>
#include<vector>
#include<string>
#include<algorithm>	
#include<map>
#include<set>
#include<utility>
#include<cmath>
#include<cstring>
#include<queue>
#include<cstdio>
#include<sstream>
#include<iomanip>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)
using namespace std;
//kaewasuretyuui
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vp;
typedef vector<vp> vvp;
typedef pair<int,pii> pip;
typedef vector<pip>vip;
const double PI=acos(-1);
const double EPS=1e-8;
const int inf=1e8;
int main(){
	int n;
	int dx[]={0,1,0,-1};
	int dy[]={-1,0,1,0};
	while(cin>>n,n){
		n--;
		vvi in(500,vi(500,-1));
		in[250][250]=0;
		rep(i,n){
			int a,b;
			cin>>a>>b;
			rep(j,500)rep(k,500)if(a==in[j][k]){
				in[j+dx[b]][k+dy[b]]=i+1;
			}
		}
		int sx=inf,sy=inf,gx=-inf,gy=-inf;
		rep(i,500)rep(j,500)if(in[i][j]+1){
			sx=min(sx,i);
			sy=min(sy,j);
			gx=max(gx,i);
			gy=max(gy,j);
		}
		cout<<gy-sy+1<<" "<<gx-sx+1<<endl;
	}
}