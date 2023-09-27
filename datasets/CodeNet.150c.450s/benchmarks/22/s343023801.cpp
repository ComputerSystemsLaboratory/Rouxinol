#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

struct edge{int from,to,cost;};
const int INF = 1000000000;

int main(){
	int v,e,r;
	vector<edge> E;
	scanf("%d %d %d",&v,&e,&r);
	for(int i=0;i<e;i++){
		int s,t,d;
		scanf("%d %d %d",&s,&t,&d);
		edge e;
		e.from = s;
		e.to = t;
		e.cost = d;
		E.push_back(e);
	}
	int d[1000];
	fill(d,d+v,INF);
	d[r] = 0;
	for(int i=0;i<v;i++){
		bool flag = true;
		for(int j=0;j<e;j++){
			if(d[E[j].from]!=INF&&d[E[j].to]>d[E[j].from]+E[j].cost){
				d[E[j].to] = d[E[j].from] + E[j].cost;
				flag = false;
			}
		}
		if(flag) break;
		if(i==v-1){
			printf("NEGATIVE CYCLE\n");
			return 0;
		}
	}
	for(int i=0;i<v;i++){
		if(d[i]==INF) printf("INF\n");
		else printf("%d\n",d[i]);
	}
	return 0;
}