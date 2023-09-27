#include<iostream>
#include<cstdio>

typedef std::pair<int,int> P;
//親,深さ

P node[10001];

void init(){
	for(int i = 0; i < 10001; i++){
		node[i].first = i;
		node[i].second = 0;
	}
}

int find(int x){
	if(node[x].first == x)return x;
	else return node[x].first = find(node[x].first);
}

void unite(int x, int y){
	x = find(x), y = find(y);
	if(x == y)return;
	
	if(node[x].second < node[y].second)node[x].first = y;
	else {
		node[y].first = x;
		if(node[x].second == node[y].second)node[x].second++;
	}
}

int main(){
	init();

	int n, q, ch;
	ch = scanf("%d %d", &n, &q);

	for(int i = 0; i < q; i++){
		int a, b, c;
		ch = scanf("%d %d %d", &a, &b, &c);
		
		if(!a)unite(b, c);
		else printf("%d\n", (find(b) == find(c) ? 1 : 0));
	}

	return 0;
}