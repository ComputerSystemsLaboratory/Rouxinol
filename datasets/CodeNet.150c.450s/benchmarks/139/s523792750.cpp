#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair<int,int> P;

#define rep(i,n) for(int i=0;i<(n);++i)
#define repi(i,a,b) for(int i=int(a);i<(b);i++)
#define repr(i,b,a) for(int i=int(b);i>=(a);i--)
#define all(x) x.begin(),x.end()

const ll mod = 1e9+7;
const ll INF = 1e9;

ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool valid(int lx,int ux,int ly,int uy,int x,int y){
	return lx<=x&&x<ux&&ly<=y&&y<uy; 
}
ll power(ll x,ll p){
	if(p==0)return 1;
	ll res=power(x*x%mod,p/2);
	if(p%2==1)res=res*x%mod;
	return res;
}


int main()
{
	int n,m;
	cin>>n>>m;
	vector<vector<int>> g(n);
	rep(i,m){
		int a,b;
		cin>>a>>b;
		a--;b--;
		g[a].push_back(b);
		g[b].push_back(a);
	}

	queue<int> que;
	vector<int> ans(n,-1);
	que.push(0);
	ans[0]=0;
	while(!que.empty()){
		int cur = que.front();que.pop();
		for(auto next: g[cur]){
			if(ans[next]>=0)continue;
			ans[next]=cur;
			que.push(next);
		}
	}
	cout<<"Yes"<<endl;
	repi(i,1,n)cout<<ans[i]+1<<endl;

	return 0;
}