#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<functional>
#include<vector>
#include<queue>
#include<stack>
#include<set>
using namespace std;
#define MOD 1000000007
#define f(i,n) for(int i=0;i<int(n);i++)
#define N (100000)
#define INF (9223372036854775807)

struct edge{
	int to;
	long long dis;
};

int n, m;
vector<edge>e[N];
long long d[N];
bool dec[N];

void init(void){
	f(i, N){
		d[i] = INF;
		dec[i] = false;
	}
}


void dijkstra(int s){
	int xv;
	d[s] = 0;
	priority_queue<pair<long long, int> >pq;
	pq.push(make_pair(0, s));
	while (!pq.empty()){
		while (dec[pq.top().second]){
			pq.pop();
			if (pq.empty())return;
		}
		xv = pq.top().second;
		dec[xv] = true;
		f(i, e[xv].size()){
			if (d[e[xv][i].to] > (d[xv] + e[xv][i].dis)){
				d[e[xv][i].to] = d[xv] + e[xv][i].dis;
				pq.push(make_pair(-d[e[xv][i].to], e[xv][i].to));
			}
		}
	}
	return;
}



int main(void){
	int x, y, k;
	long long z;
	scanf("%d %d %d", &n, &m, &k);
	init();
	f(i, m){
		scanf("%d %d %lld", &x, &y, &z);
		e[x].push_back({ y, z });
	}
	dijkstra(k);

	f(i, n){
		if(d[i]!=INF)printf("%lld\n", d[i]);
		else printf("INF\n");
	}

	return 0;
}

