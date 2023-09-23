#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef double db;
ll H,W;
ll sen[10][10000];
ll rv[10];
int main()
{while(1){
	scanf("%lld%lld",&H,&W);
	if(!H) return 0;
	for(ll i=0;i<H;i++) for(ll j=0;j<W;j++) scanf("%lld",&sen[i][j]);
	ll ans=0;
	for(ll s=0;s< 1<<H;s++){
		fill(rv,rv+H,0);
		ll res=0;
		for(ll i=0;i<H;i++) if((s>>i)&1) rv[i]=1;
		for(ll i=0;i<W;i++){
			ll cnt=0;
			for(ll j=0;j<H;j++){
				cnt+=(sen[j][i]+rv[j])%2;
			}
			res+=max(cnt,H-cnt);
		}
		ans=max(res,ans);
	}
	printf("%lld\n",ans);
}}