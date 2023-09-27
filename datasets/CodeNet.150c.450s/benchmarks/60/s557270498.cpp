#include <iostream>
#include <vector>

using namespace std;

struct Edge{
	int to;
};

vector<vector<int>> List_to_Mat(vector<vector<Edge>>& G){
	int V = G.size();
	vector<vector<int>> result;
	result = vector<vector<int>>(V, vector<int>(V, 0));

	for(int i = 0; i < V; i++){
		for(int j = 0; j < G[i].size(); j++){
			int v = G[i][j].to;
			result[i][v - 1] += 1;
		}
	}
	return result;
}


int main(void)
{
	int V;
	cin >> V;

	vector<vector<Edge>> AdjList(V);
	for(int i = 0; i < V; i++){
		int u, k;
		cin >> u >> k;
		for(int j = 0; j < k; j++){
			int v;
			cin >> v;
			AdjList[i].push_back(Edge{v});	
		}
	}

	vector<vector<int>> AdjMat = List_to_Mat(AdjList);
	for(int i = 0; i < V; i++){
		for(int j = 0; j < V; j++){
			if(j != V - 1)
				cout << AdjMat[i][j] << " ";
			else
				cout << AdjMat[i][j] << endl;
		}
	}
	return 0;
}