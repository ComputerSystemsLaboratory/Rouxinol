#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repb(i,a,b) for(int i=a;i>=b;i--)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define int long long
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int c,r,ans;
int d[10][10000],f[10];

void dfs(int now){
	if(now==c){
		int sum=0;
		rep(i,0,r){
			int tmp=0;
			rep(j,0,c){
				if((d[j][i] && f[j])||(d[j][i]==0 && f[j]==0)) tmp++;
			}
			tmp=max(tmp,c-tmp);
			sum+=tmp;
		}
		ans=max(ans,sum);
		return;
	}
	rep(i,0,2){
		f[now]=i;
		dfs(now+1);
	}
}

signed main(){
	while(1){
		cin>>c>>r;
		if(c+r==0) break;
		rep(i,0,c) rep(j,0,r) scanf("%d",&d[i][j]);
		ans=0;
		dfs(0);
		o(ans);
	}
}