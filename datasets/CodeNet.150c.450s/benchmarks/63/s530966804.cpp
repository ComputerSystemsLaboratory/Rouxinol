#include<bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;
#define BIG_NUM 2000000000
#define HUGE_NUM 1000000000000000000
#define MOD 1000000007
#define EPS 0.000000001
using namespace std;



#define SIZE 100005

struct Edge{
	Edge(int arg_to,int arg_dist){
		to = arg_to;
		dist = arg_dist;
	}
	int to,dist;
};

struct Info{
	Info(int arg_node_id,int arg_sum_dist){
		node_id = arg_node_id;
		sum_dist = arg_sum_dist;
	}
	bool operator<(const struct Info &arg) const{

		return sum_dist > arg.sum_dist; //総距離の昇順(PQ)
	}

	int node_id,sum_dist;
};

int V,E,start;
int min_dist[SIZE];
vector<Edge> G[SIZE];

int main(){

	scanf("%d %d %d",&V,&E,&start);

	int from,to,dist;

	for(int i = 0; i < E; i++){

		scanf("%d %d %d",&from,&to,&dist);
		G[from].push_back(Edge(to,dist));
	}

	for(int i = 0; i < V; i++){

		min_dist[i] = BIG_NUM;
	}

	priority_queue<Info> Q;
	min_dist[start] = 0;

	Q.push(Info(start,0));

	while(!Q.empty()){

		if(Q.top().sum_dist > min_dist[Q.top().node_id]){

			Q.pop();

		}else{

			for(int i = 0; i < G[Q.top().node_id].size(); i++){

				int next_node = G[Q.top().node_id][i].to;
				int next_dist = Q.top().sum_dist+G[Q.top().node_id][i].dist;

				if(min_dist[next_node] > next_dist){
					min_dist[next_node] = next_dist;
					Q.push(Info(next_node,next_dist));
				}
			}
			Q.pop();
		}
	}

	for(int i = 0; i < V; i++){

		if(min_dist[i] == BIG_NUM){

			printf("INF\n");

		}else{

			printf("%d\n",min_dist[i]);
		}
	}

	return 0;
}


