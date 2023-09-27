#include  <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
using namespace std;

const int vmax=1000010;
const int inf=1023456789;

int N,M,S;
struct node{int to,cost;};
vector<node> graph[vmax];

typedef tuple<int,int> state;
int dist[vmax];

void dijkstra(){
	rep(i,N)dist[i]=inf;
	dist[S]=0;
	priority_queue<state,vector<state>,greater<state>> q;
	q.push(state(0,S));
	while(!q.empty()){
		int c,v;tie(c,v)=q.top();q.pop();
		for(auto &e:graph[v]){
			int nc=c+e.cost;
			int nv=e.to;
			if(dist[nv]>nc){
				dist[nv]=nc;
				q.push(state(nc,nv));
			}
		}
	}
	return;
}

int main(void){
	cin >> N >> M >> S;
	rep(i,M){
		int a,b,c;
		cin >> a >> b >> c;
		graph[a].push_back({b,c});
	}
	dijkstra();
	rep(i,N){
		if(dist[i]==inf)
			cout << "INF" << endl;
		else
			cout << dist[i] << endl;
	}
	return 0;
}