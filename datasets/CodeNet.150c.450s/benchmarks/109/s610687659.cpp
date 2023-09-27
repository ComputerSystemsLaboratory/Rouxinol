#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
#define rer(i,l,n) for(int i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int change(int h,int m,int s){
	return h*3600+m*60+s;
}

int main(){
	int n;
	while(1){
		cin>>n;
		if(n==0) break;
		int sh,sm,ss,th,tm,ts,ans=0;
		vi d(86410);
		rep(i,0,n){
			scanf("%d:%d:%d %d:%d:%d",&sh,&sm,&ss,&th,&tm,&ts);
			d[change(sh,sm,ss)]++; d[change(th,tm,ts)]--;
		}
		rer(i,1,86400){
			d[i]+=d[i-1]; ans=max(ans,d[i]);
		}
		o(ans);
	}
}