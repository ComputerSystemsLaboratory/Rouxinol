#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<vector>
#include<set>
#include<list>
#include<queue>
#include<cmath>
#include<functional>
#include<algorithm>
#define INF (1<<29)
#define EPS 1e-10
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;


int main(){
	int p[11];
	int n,m;
	while(cin>>n>>m,n||m){
		fill(p,p+11,0);
		rep(i,n){
			int a,b;
			cin>>a>>b;
			p[b] += a;
		}
		for(int i=10;m&&i>=0;i--){
			int t=min(p[i],m);
			p[i] -= t;
			m -= t;
		}
		int ans=0;
		rep(i,11)ans+=p[i]*i;
		cout<<ans<<endl;
	}
	return 0;
}