// GRL_1_A
#include <iostream>
#include <vector>
#include <queue>
#include <math.h>
#define   N   1000000000
using namespace std;

struct edge{
	int adj;
	int dis;
};

int main(){
	int V, E, r, s, t, d, x;
	vector<vector<edge> > A;
	vector<int> distance;
	queue<int> ver;
	edge e;

	cin>>V>>E>>r;

	A.resize(V);
	for(int i=0;i<V;i++){
		distance.push_back(N);
	}
	distance[r] = 0;

	for(int j=0;j<E;j++){
		cin>>s>>t>>d;
		e.adj = t;
		e.dis = d;
		A[s].push_back(e);
	}
	
	ver.push(r);
	while(!ver.empty()){
		x = ver.front();
		for(int i=0;i<A[x].size();i++){
			if(distance[A[x][i].adj] > distance[x] + A[x][i].dis){
				distance[A[x][i].adj] = distance[x] + A[x][i].dis;
				ver.push(A[x][i].adj);
			}
		}
		ver.pop();
	}
	
	for(int i=0;i<V;i++){
		if(distance[i] >= N)
			cout<<"INF"<<endl;
		else
			cout<<distance[i]<<endl;
	}
	
	return 0;
}