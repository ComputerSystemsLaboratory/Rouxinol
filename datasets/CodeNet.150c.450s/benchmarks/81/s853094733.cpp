#include<iostream>
#include<vector>
#include<cmath>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

struct Edge{
	int to,cost;
	Edge(int t,int c){
		to=t;
		cost=c;
	}
};

typedef vector<vector<Edge> > AdjList;

AdjList graph;

const int INF=10000000;

vector<vector<int> > dist;

bool bellman_ford(int n,int s){
	dist[s][s]=0;
	for(int i=0;i<n;i++){
		for(int v=0;v<n;v++){
			for(int k=0;k<graph[v].size();k++){
				Edge e=graph[v][k];
				if(dist[s][v]!=INF && dist[s][e.to]>dist[s][v]+e.cost){
					dist[s][e.to]=dist[s][v]+e.cost;
				}
				if(i==n-1)return true;
			}
		}
	}
	return false;
}

int main(){
	while(1){
		int num,maximum=0;
		cin>>num;
		graph=AdjList(10);
		if(num==0)break;
		for(int i=0;i<num;i++){
			int from,to,cost;
			cin>>from>>to>>cost;
			graph[from].push_back(Edge(to,cost));
			graph[to].push_back(Edge(from,cost));
			maximum=max(maximum,to);
		}
		int sum[maximum+1];
		for(int i=0;i<=maximum;i++){
			sum[i]=0;
		}
		dist=vector<vector<int> >(maximum+1);
		for(int i=0;i<=maximum;i++){
			dist[i]=vector<int>(maximum+1,INF);
		}
		for(int i=0;i<=maximum;i++){
			bellman_ford(maximum+1,i);
			for(int j=0;j<=maximum;j++){
				sum[i]+=dist[i][j];
			}
		}
		int ansp=0,anssum=sum[0];
		for(int i=1;i<=maximum;i++){
			if(sum[i]<anssum){
				anssum=sum[i];
				ansp=i;
			}
		}
		cout<<ansp<<" "<<anssum<<endl;
	}
	return 0;
}