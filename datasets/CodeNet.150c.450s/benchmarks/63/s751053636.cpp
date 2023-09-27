#include <iostream>
#include <queue>
#include <vector>
#include <map>

using namespace std;
#define INF 1e+9

struct Edge{
	int to;
	int weight;
};

vector<int> SSSP(vector<vector<Edge> >& G, int r)
{
	int V = G.size();
	vector<int> result(V, INF);

	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
	pq.push(make_pair(0, r));

	while(!pq.empty()){
		int s = pq.top().first;
		int v = pq.top().second;
		pq.pop();

		if(result[v] == INF){

			result[v] = s;

			for(int i = 0; i < G[v].size(); i++){
				int tgt = G[v][i].to;
				int score = s + G[v][i].weight;
				if( result[tgt] == INF){
					pq.push(make_pair(score, tgt));
				}
			}
			
		}
	}
	return result;
}

int main(void)
{
	int V, E, r;
	cin >> V >> E >> r;

	vector<vector<Edge> > AdjList(V);
	for(int i = 0; i < E; i++){
		int s, t, d;
		cin >> s >> t >> d;
		AdjList[s].push_back(Edge{t,d});
	}

	vector<int> SP = SSSP(AdjList, r);
	for(auto i : SP){
		if(i == INF){
			cout << "INF" << endl;
		}else{
			cout << i << endl;
		}
	}
	return 0;
}