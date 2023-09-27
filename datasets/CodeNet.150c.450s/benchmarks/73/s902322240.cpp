#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define rrep(i,n) for(int i=1;i<=n;i++)
#define drep(i,n) for(int i=n;i>=0;i--)
#define INF 100000005
#define MAX 131072
#define ll long long
#define dmp make_pair
#define dpb push_back
#define P pair<int,int>
#define fi first
#define se second
using namespace std;
//__gcd(a,b), __builtin_popcount(a);
const int inf = 2147483647;

int n, dat[2*MAX];
void init(int m){
	n = 1;
	while(n < m)n *= 2;
	for(int i = 0;i < 2*n;i++)dat[i] = 0;
}

void change(int x, int y){
	x += n-1;
	dat[x] += y;
	while(x > 0){
		x = (x-1)/2;
		dat[x] += y;
	}
}

int query(int a, int b, int k, int l, int r){
	if(b <= l || r <= a)return 0;
	if(a <= l && r <= b)return dat[k];
	int vl = query(a, b, 2*k+1, l, (l+r)/2);
	int vr = query(a, b, 2*k+2, (l+r)/2, r);
	return vl+vr;
}

int main(){
	int m, q, c, x, y;
	scanf("%d%d", &m, &q);
	init(m);
	while(q--){
		scanf("%d%d%d", &c, &x, &y);
		if(!c)change(x-1, y);
		else printf("%d\n", query(x-1, y, 0, 0, n));
	}
	//for(int i = 0;i < n;i++)printf("%d ", dat[i]);
	return 0;
}