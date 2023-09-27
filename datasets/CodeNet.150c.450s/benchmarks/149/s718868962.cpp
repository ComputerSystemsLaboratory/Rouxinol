#include <bits/stdc++.h>
using namespace std;

int par[10001], d[10001];
void init(int n){
	for(int i = 0;i < n;i++){
		par[i] = i;
		d[i] = 0;
	}
}

int find(int x){
	if(x == par[x])return x;
	return par[x] = find(par[x]);
}

void unite(int x, int y){
	x = find(x);
	y = find(y);
	if(x == y)return ;
	if(d[x] < d[y]){
		par[x] = y;
	}else{
		par[y] = x;
		if(d[x] == d[y])d[x]++;
	}
}

bool same(int x, int y){
	return find(x) == find(y);
}

int main(){
	int n, q, c, x, y;
	scanf("%d%d", &n, &q);
	init(n);
	
	for(int i = 0;i < q;i++){
		scanf("%d%d%d", &c, &x, &y);
		if(!c){
			unite(x, y);
		}else{
			printf("%d\n", same(x, y));
		}
	}
	return 0;
}
