#include <bits/stdc++.h>
#include <string.h>
#include <cmath>
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define max3(A,B,C) max((A),max((B),(C)))
#define popcount(X) __builtin_popcount(X)
#define popcountl(X) __builtin_popcountl(X)
#define getbit(x,i) (1&((x)>>(i)))
#define setbit(x,i,bit) ((x)|=((bit)<<(i)))
#define getbitl(x,i) (1&((x)>>((ll)i)))
#define setbitl(x,i,bit) ((x)|=((bit)<<((ll)i)))
#define log2(x) (32 - __builtin_clz(x))
#define log2l(x) (32 - __builtin_clzl(x))

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;

const int INF = 0x3f3f3f3f;
const long long int INFL = 0x3f3f3f3f3f3f3f3f;
const double pi = atan(1.0)*4.0;
const int N = 3e5 + 500;

int dist[N], mrc[N];
vii v[N];
set<ii> st;

void Dijkstra(int o) {
	memset(dist,INF,sizeof(dist));
	dist[o] = 0;
	st.clear();
	st.insert(mp(0,o));
	memset(mrc,0,sizeof(mrc));
	while(!st.empty()) {
		set<ii>::iterator it = st.begin();
		if(mrc[it->s] == 0) {
			mrc[it->s] = 1;
			dist[it->s] = it->f;
			for(int i = 0; i < v[it->s].size(); i++) {
				st.insert(mp(dist[it->s] + v[it->s][i].s,v[it->s][i].f));
			}
		}
		st.erase(it);
	}
}

int main(void) {
	int n;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) {
		int u, k;
		scanf("%d %d", &u, &k);
		for(int j = 0; j < k; j++) {
			int vt, c;
			scanf("%d %d", &vt, &c);
			v[u].pb(mp(vt,c));
		}
	}
	Dijkstra(0);
	for(int i = 0; i < n; i++) {
		printf("%d %d\n", i, dist[i]);
	}
	
	return 0;
}
