#include <bits/stdc++.h>
using namespace std;
int n;
const int MAXN = 100010;
int bit[MAXN];
void update(int pos, int val){
	while(pos <= n) {
		bit[pos] += val;
		pos += pos & -pos;
	}
}
long long get(int pos){
	long long ret = 0;
	while(pos){
		ret += bit[pos];
		pos -= pos & -pos;
	}
	return ret;
}
int main(){
	int q;
	scanf("%d %d", &n, &q);
	while(q--){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if(a == 0) update(b, c);
		else printf("%lld\n", get(c) - get(b - 1));
	}
	return 0;
}