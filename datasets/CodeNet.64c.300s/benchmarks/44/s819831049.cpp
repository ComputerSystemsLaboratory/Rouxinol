#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <functional>
#include <algorithm>
#define rep(i,a) for(int i=0;i<(a);++i)
const int INF = 1<<30;
#define _m_ 1
struct edge{
	int from, to, cost; 
	edge () {}
	edge(int f, int t, int c){
		from=f;
		to=t;
		cost=c;
	}
};
typedef std::pair<int, int> P;

int V;
std::vector<edge> es;
int d[11];
int maxm=0;
int SP(int s){
	rep(i, maxm+1)d[i] = INF;
	d[s] = 0;
	while(_m_){
		bool update = false;
		rep(i, es.size()){
			edge e = es[i];
			if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost){
				d[e.to] = d[e.from] + e.cost;
				update = true;
			}
		}
		if(!update)break;
	}
	int res = 0;
	rep(i, maxm+1){
		//if(i == s)continue;
		if(d[i] != INF)res += d[i];
	}
	
	return res;
}

int main(){
	int n;
	while(scanf("%d",&n) && n){
		es.clear();
		maxm=0;
		for(int i = 0 ; i < n; ++i){
			int a, b, c;
			scanf("%d %d %d",&a, &b, &c);
			edge ac(a,b,c);
			edge bc(b,a,c);
			es.push_back(ac);
			es.push_back(bc);
			maxm=std::max(maxm,std::max(a,b));
		}
		V = n;
		P ans=P(0, SP(0));
		
		for(int i = 0; i < maxm + 1; ++i){
			if(ans.second > SP(i)){
				ans.second = SP(i);
				ans.first = i;
			}
			//printf("OK\n");
			//printf("%d %d\n", i, SP(i));
		}
		printf("%d %d\n", ans.first, ans.second);
	}
}