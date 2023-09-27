#include <iostream>
#include <vector>

using namespace std;
int cnt = 1;

struct Edge{
	int to;
};

void DFS_visit(int top, vector<vector<Edge>>& G, vector<vector<int>>& timestump)
{
	int next;
	timestump[top][0] = cnt++;
	Label:
	if(G[top].empty()){
		timestump[top][1] = cnt++;
	}else{
		next = G[top].begin()->to - 1;
		G[top].erase(G[top].begin());
		if(timestump[next][0] == 0){
			DFS_visit(next, G, timestump);
			goto Label;
		}else{
			goto Label;
		}
	}
}

void DFS(vector<vector<Edge>>& G)
{
	vector<vector<int>> timestump;
	timestump = vector<vector<int>>(G.size(), vector<int>(2, 0));

	for(int i = 0; i < G.size(); i++){
		if(timestump[i][0] == 0){
			DFS_visit(i, G, timestump);
		}
	}

	for(int i = 0; i < G.size(); i++){
		cout << i + 1 << " " << timestump[i][0] << " " << timestump[i][1] << endl;
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

	DFS(AdjList);
	return 0;
}