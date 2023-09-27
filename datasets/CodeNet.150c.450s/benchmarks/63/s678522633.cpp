#include<cstdio>
#include<queue>

using namespace std;
#define REP(i,j) for(int i=0;i<(j);i++)

#define MAX_V 100000
#define INF 2147483647

struct edge{ int to, cost; };//to,cost
typedef pair<int,int> P;//first:Minimum distance/second:Vertex number

int V;
vector<edge> G[MAX_V];
int d[MAX_V];


void dij(int s){
//use greater<P> to pop minimum struct in the P-queue
	priority_queue<P,vector<P>,greater<P> >que;
	fill(d,d+V,INF);//insted of "for"loop
	d[s]=0;
	que.push(P(0,s));

	while(!que.empty()){
		P p=que.top();
		que.pop();
		int v=p.second;
		if(d[v]<p.first) continue;
		REP(i,G[v].size()){
			edge e=G[v][i];
			if(d[e.to]>d[v]+e.cost){
				d[e.to]=d[v]+e.cost;
				que.push(P(d[e.to],e.to));
			}
		}
	}
}

int main(){
	int s,E;
	scanf("%d%d%d",&V,&E,&s);
	REP(i,E){
		int rs,rt,rd;
		scanf("%d%d%d",&rs,&rt,&rd);
		edge ine={rt,rd};
		G[rs].push_back(ine);
	}
	dij(s);
	REP(i,V){
		if(d[i]>=INF)
			printf("INF\n");
		else
			printf("%d\n",d[i]);
	}
	return 0;
}