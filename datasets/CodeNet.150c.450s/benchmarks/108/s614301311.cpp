#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Edge{
	int to;
};

void BFS(vector<vector<Edge>>& G)
{
	queue<int> Q;
	vector<int> depth(G.size(), -1);
	int dep = 0;
	
	depth[0] = dep;
	for(auto i : G[0])
		Q.push(i.to);
	while(!Q.empty()){
		dep++;
		int size = Q.size();

		for(int i = 0; i < size; i++){
			int v = Q.front();
			Q.pop();
			if(depth[v-1] == -1){
				depth[v-1] = dep;
				for(auto i : G[v-1])
					Q.push(i.to);
			}
		}
	}

	for(int i = 0; i < G.size(); i++){
		cout << i + 1 << " " << depth[i] << endl;
	}
}

int main(void)
{
	int num;
	cin >> num;

	vector<vector<Edge>> AdjList(num);
	for(int i = 0; i < num; i++){
		int u, k;
		cin >> u >> k;
		for(int j = 0; j < k; j++){
			int v;
			cin >> v;
			AdjList[i].push_back(Edge{v});
		}
	}

	BFS(AdjList);
	return 0;
}