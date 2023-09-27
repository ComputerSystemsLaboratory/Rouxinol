#include <bits/stdc++.h>
using namespace std;

int par[100001], ran[100001];
int find(int x){
	if(par[x] == x)return x;
	else return par[x] = find(par[x]);
}

void unite(int x, int y){
	x = find(x);
	y = find(y);
	if(x == y)return ;
	if(ran[x] < ran[y])par[x] = y;
	else{
		par[y] = x;
		if(ran[x] == ran[y])ran[y]++;
	}
}

bool same(int x, int y){
	return find(x) == find(y);
}

int main(){
	int n, m, q, x, y;
	scanf("%d%d", &n, &m);
	for(int i = 0;i < n;i++)par[i] = i;
	for(int i = 0;i < m;i++){
		scanf("%d%d", &x, &y);
		unite(x, y);
	}
	scanf("%d", &q);
	for(int i = 0;i < q;i++){
		scanf("%d%d", &x, &y);
		if(same(x, y))printf("yes\n");
		else printf("no\n");
	}
	return 0;
}
