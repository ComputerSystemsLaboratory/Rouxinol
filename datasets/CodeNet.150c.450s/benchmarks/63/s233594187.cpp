#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define INF 1000000001
class E{
public:
	int rel, cost;
	E(int rel, int cost){
		this->rel = rel;
		this->cost = cost;
	}
};

vector <E> G[100000];
int main(){	
	int v = 0;//num of vertices
	int e = 0;//num of edges
	int r = 0;//source node
	cin >> v >> e >> r;

	int src, tar, cost;
	for (int i = 0; i < e; i++){
		cin >> src >> tar >> cost;
		G[src].push_back(*(new E(tar, cost)));
	}

	priority_queue < pair<int, int> > PQ;
	int sum = 0;
	int d[100000];//results
	for (int i = 0; i < v; i++){
		d[i] = INF; 
	}
	d[r] = 0;
	PQ.push(make_pair(0, r));

	int s, f;
	while (!PQ.empty()) {

		f = PQ.top().first;//first is the distance 
		s = PQ.top().second;//second is the target node
		PQ.pop();

		for (int i = 0; i < G[s].size(); i++) {
			E e = G[s][i];
			if (d[e.rel] > e.cost - f) {
				d[e.rel] = e.cost - f;
				PQ.push(make_pair(-d[e.rel], e.rel));
			}
		}

	}

	for (int i = 0; i < v; i++) {
		if (d[i] == INF){ 
			cout << "INF" << endl; 
		}else{ 
			cout << d[i] << endl; 
		}

	}

	return 0;
}