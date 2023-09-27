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
ll n,k;
ll val[100000];
ll sum[100000];
int main()
{while(1){
	memset(val,0,sizeof(val));
	memset(sum,0,sizeof(sum));
	cin>>n>>k;
	if(!n) return 0;
	for(ll i=0;i<n;i++) cin>>val[i];
	for(ll i=0;i<k;i++) sum[0]+=val[i];
	ll ans=sum[0];
	for(ll i=1;i<=n-k;i++){
		sum[i]=sum[i-1]-val[i-1]+val[i+k-1];
		ans=max(ans,sum[i]);
	}
	cout<<ans<<endl;
}}