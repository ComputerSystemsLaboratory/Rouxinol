#include <cstdio>
#include <algorithm>
#define INF 1e+18
#define MAX_SIZE 1 << 17
using namespace std;

typedef long long ll;

int n,k;
ll v[100000];
ll segMax[2][2 * MAX_SIZE - 1],segAdd[2][2 * MAX_SIZE - 1];

void add(int num,int a,int b,ll x,int k = 0,int l = 0,int r = n){
	if(b <= l || r <= a) return;
	if(a <= l && r <= b){
		segAdd[num][k] += x;
		return;
	}
	add(num,a,b,x,k * 2 + 1,l,(l + r) / 2);
	add(num,a,b,x,k * 2 + 2,(l + r) / 2,r);
	segMax[num][k] = max(segMax[num][k * 2 + 1] + segAdd[num][k * 2 + 1],segMax[num][k * 2 + 2] + segAdd[num][k * 2 + 2]);
}

ll get(int num,int a,int b,int k = 0,int l = 0,int r = n){
	if(b <= l || r <= a) return -INF;
	if(a <= l && r <= b) return segAdd[num][k] + segMax[num][k];
	return max(get(num,a,b,k * 2 + 1,l,(l + r) / 2),get(num,a,b,k * 2 + 2,(l + r) / 2,r)) + segAdd[num][k];
}

void init(){
	int t = 1;
	while(t < n + 1) t *= 2;
	for(int i = 0;i < t * 2 - 1;i++){
		segMax[0][i] = -INF;
		segMax[1][i] = -INF;
	}
	segMax[0][t - 1] = 0;
	for(int i = 0;i < n;i++) segMax[0][i + t] = segMax[0][i + t - 1] + v[i];
	ll ma = -INF;
	for(int i = n;i >= 0;i--) {
		ma = max(ma,segMax[0][i + t - 1]);
		segMax[1][i + t - 1] = ma - segMax[0][i + t - 1];
	}
	for(int i = t - 2;i >= 0;i--) {
		segMax[0][i] = max(segMax[0][i * 2 + 1],segMax[0][i * 2 + 2]);
		segMax[1][i] = max(segMax[1][i * 2 + 1],segMax[1][i * 2 + 2]);
	}
	n = t;
}

int main(){
	/*scanf("%d %d",&n,&k);
	for(int i = 0;i < n;i++) scanf("%lld",&v[i]);
	init();
	for(int i = 0;i < k - 1;i++){
		
	}
	printf("%lld\n",get(1,0,n));*/
	while(1){
		ll ma = -INF;
		scanf("%d",&n);
		if(!n) break;
		for(int i = 0;i < n;i++){
			scanf("%lld",&v[i]);
			ma = max(ma,v[i]);
		}
		init();
		if(ma < 0) printf("%lld\n",ma);
		else printf("%lld\n",get(1,0,n));
	}
	return 0;
}