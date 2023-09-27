#include <cstdio>
#include <queue>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

typedef pair<int, int> P;

const int inf = (int)1e9;

struct E{
	E(int t, int c) :
		t(t), c(c)
	{}

	int t, c;
};

int n, m, s;
vector<E> g[(int)1e5];
int d[(int)1e5];

int main(){
	scanf("%d%d%d", &n, &m, &s);
	rep(i, m){
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		g[a].push_back(E(b, c));
	}

	fill(d, d + n, inf);

	priority_queue<P, vector<P>, greater<P> > q;
	d[s] = 0;
	q.push(P(0, s));
	while(!q.empty()){
		P v = q.top();
		q.pop();

		if(v.first > d[v.second]){
			continue;
		}

		rep(i, g[v.second].size()){
			E e = g[v.second][i];
			if(d[e.t] > d[v.second] + e.c){
				d[e.t] = d[v.second] + e.c;
				q.push(P(d[e.t], e.t));
			}
		}
	}

	rep(i, n){
		if(d[i] != inf){
			printf("%d\n", d[i]);
		}
		else{
			puts("INF");
		}
	}
	return 0;
}