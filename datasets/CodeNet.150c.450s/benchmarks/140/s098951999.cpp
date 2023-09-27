#include <cstdio>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

typedef pair<int, int> P;
typedef pair<int, P> Q;

int n, m;
Q g[100000];
int p[10000];
int r[10000];

void init(){
	rep(i, n){
		p[i] = i;
		r[i] = 0;
	}
}

int find(int i){
	return p[i] == i ? i : p[i] = find(p[i]);
}

bool same(int i, int j){
	return find(i) == find(j);
}

void unite(int i, int j){
	int a = find(i);
	int b = find(j);

	if(a == b){
		return;
	}

	if(r[a] > r[b]){
		p[b] = a;
	}
	else{
		p[a] = b;
		if(r[a] == r[b]){
			++r[b];
		}
	}
}

int main(){
	scanf("%d%d", &n, &m);
	rep(i, m){
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		g[i] = Q(c, P(a, b));
	}

	sort(g, g + m);
	
	init();

	int ans = 0;
	rep(i, m){
		int a = g[i].second.first;
		int b = g[i].second.second;
		int c = g[i].first;

		if(!same(a, b)){
			unite(a, b);
			ans += c;
		}
	}
	printf("%d\n", ans);
	return 0;
}