#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<bitset>
#include<cstdlib>
#include<cmath>
#include<set>
#include<list>
#include<deque>
#include<map>
#include<queue>
using namespace std;
typedef long long ll;
const double PI = acos(-1.0);
const double eps = 1e-6;
const int INF = 0x3f3f3f3f;

const int MAXN = 1e5+10;
int n,k;
ll T[MAXN];

int check(ll P){
	int i =0;
	for(int j=0;j<k;j++){
		ll s=0;
		while(s+T[i]<=P){
			s+=T[i];
			i++;
			if(i==n)	return n;
		}
	}
	return i;
}

int solve(){
	ll left =0;
	ll right = MAXN*MAXN;
	ll mid;
	while(right-left>1){
		mid = (left+right)/2;
		int v = check(mid);
		if(v>=n)	right = mid;
		else left = mid;
	}
	return right;
}

int main(){
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%lld",&T[i]);
	}
	ll ans = solve();
	printf("%lld\n",ans);

	return 0;
}


