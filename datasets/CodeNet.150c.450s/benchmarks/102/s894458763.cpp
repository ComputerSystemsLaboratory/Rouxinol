#include "bits/stdc++.h"
using namespace std;
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ALL(s) s.begin(),s.end()
#define P pair<ll,ll>
#define vl vector<ll>
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vvl vector<vector<ll>>
#define print(n) cout<<n<<endl
const int M=100010;
const int MOD=1000000007;
const int inf=1000000007;
const long long INF=1000000000000000007;
using ll=long long;
int dx[4]={-1,0,1,0},dy[4]={0,-1,0,1};

int ans=0;
int w,h;
char a[22][22];
bool f[22][22];
void dfs(int H,int W){
	if(W<0||W>=w||H<0||H>=h||a[H][W]=='#'||f[H][W]==true)return;
	if(a[H][W]=='.'&&f[H][W]==false){
		f[H][W]=true;
		ans++;
	}
	rep(i,0,4)dfs(H+dy[i],W+dx[i]);
	return;
}

int main(){
	while(1){
		ans=0;
		rep(i,0,22)rep(j,0,22)f[i][j]=false;
		cin>>w>>h;
		int start_x,start_y;
		if(w==0)break;
		rep(i,0,h)rep(j,0,w){
			cin>>a[i][j];
			if(a[i][j]=='@')start_y=i,start_x=j;
		}
		dfs(start_y,start_x);
		print(ans+1);
	}
	return 0;
}
