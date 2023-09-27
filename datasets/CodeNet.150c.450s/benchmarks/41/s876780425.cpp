// GRL_1_C
#include <iostream>
#include <vector>
#include <queue>
#define N   100000000000000
using namespace std;

struct edge{
	int adj;
	int dis;
};

int main(){
	int V, E, s, t, d, x, count;
	vector<vector<edge> > A;
	vector<vector<long long> > distance;
	bool pos = true;
	edge e;

	cin>>V>>E;

	A.resize(V);
	distance.resize(V);
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			if(i != j)
				distance[i].push_back(N);
			else
				distance[i].push_back(0);
		}
	}

	for(int j=0;j<E;j++){
		cin>>s>>t>>d;
		e.adj = t;
		e.dis = d;
		A[s].push_back(e);
	}
	
	for(int r=0;r<V;r++){
		count = 0;
		queue<int> ver;
		ver.push(r);

		while(count<=V){
			queue<int> vern;
			while(!ver.empty()){
				x = ver.front();
				for(int i=0;i<A[x].size();i++){
					if(distance[r][A[x][i].adj] > distance[r][x] + A[x][i].dis){
						distance[r][A[x][i].adj] = distance[r][x] + A[x][i].dis;
						vern.push(A[x][i].adj);
					}
				}
				ver.pop();
			}
			if(vern.empty()) break;
			ver = vern;
			count++;
		}
		if(count > V)
			pos = false;
	}

	if(!pos){
		cout<<"NEGATIVE CYCLE"<<endl;
	}else{
		for(int i=0;i<V;i++){
			for(int j=0;j<V;j++){
				if(j != 0) cout<<" ";
				if(distance[i][j] >= N)
					cout<<"INF";
				else
					cout<<distance[i][j];
			}
			cout<<endl;
		}
	}

	return 0;
}