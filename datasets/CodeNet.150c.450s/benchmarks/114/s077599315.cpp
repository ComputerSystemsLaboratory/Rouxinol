#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
typedef pair<int,P> PP;

int par[101], d[101];
priority_queue<PP, vector<PP>, greater<PP> > G;

void init(int n){
	for(int i = 1;i <= n;i++){
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
	int n, x, y, t;
	scanf("%d", &n);
	init(n);
	
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			scanf("%d", &t);
			if(t != -1)G.push(PP(t, P(i, j)));
		}
	}
	
	int ans = 0;
	while(!G.empty()){
		PP pp = G.top();G.pop();
		P p = pp.second;
		int cost = pp.first, from = p.first, to = p.second;
		if(same(from, to))continue;
		unite(from, to);
		ans += cost;
	}
	printf("%d\n", ans);
	return 0;
}
