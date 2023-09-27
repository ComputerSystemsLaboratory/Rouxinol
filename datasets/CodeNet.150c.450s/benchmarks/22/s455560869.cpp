#include  <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
using namespace std;

const int vmax=1010;
const int inf=1023456789;

int N,M,S;
struct node{int to,cost;};
vector<node> graph[vmax];

int dist[vmax];

bool bellman_ford(){
	rep(i,N)dist[i]=inf;
	dist[S]=0;
	rep(loop,N){
		rep(i,N)for(auto &e:graph[i]){
			if(dist[i]==inf) continue;
			if(dist[e.to]>dist[i]+e.cost){
				dist[e.to]=min(dist[e.to],dist[i]+e.cost);
				if(loop==N-1) return true;
			}
		}
	}
	return false;
}

int main(void){
	cin >> N >> M >> S;
	rep(i,M){
		int a,b,c;
		cin >> a >> b >> c;
		graph[a].push_back({b,c});
	}
	if(bellman_ford())
		cout << "NEGATIVE CYCLE" << endl;
	else{
		rep(i,N){
			if(dist[i]==inf)
				cout << "INF" << endl;
			else
				cout << dist[i] << endl;
		}
	}
	return 0;
}