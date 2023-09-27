#include<iostream>
#include<vector>
#include<stack>
using namespace std;
#define MAX 101
#define VISITED 0;
#define UNVISITED -1
#define NO_POSSIBLE_VERTICE -3


int d[MAX], f[MAX];
int timeStamp = 0;
vector<int> adj[MAX];
stack<int> S;

bool isAdjacentVerticeUnvisited(int currVertice, int i){
	if (f[adj[currVertice][i]] == UNVISITED) 
		return true;
	else
		return false;
}

int getNextPossibleVertice(int currVertice) {
	int i = 0;
		
	for (i = 0; i < adj[currVertice].size(); i++){
		if (isAdjacentVerticeUnvisited(currVertice, i)){
			return adj[currVertice][i];
		}
	}

	return NO_POSSIBLE_VERTICE;

}

void dfs() {

	while (!S.empty()) {
		int currVertice = S.top();

		int nextNode = getNextPossibleVertice(currVertice);

		// cout << "dfs " << currVertice << " nt:" << nextNode << "\n";

		if (nextNode == NO_POSSIBLE_VERTICE) {
			f[currVertice] = ++timeStamp;
			S.pop();
		} else {
			d[nextNode] = ++timeStamp;
			f[nextNode] = VISITED;
			S.push(nextNode);
		}
	}

}


int main() {
	int n, i, j, vertice, id, degree;
	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> id;
		cin >> degree;
		for (j = 0; j < degree; j++) {
			cin >> vertice;
			if (id != vertice){
				adj[id].push_back(vertice);
			}
		}
	}
	// init
	for (i = 1; i <= n; i++) {
		f[i] = UNVISITED;
	}

	for (i = 1; i <= n; i++) {
		if (f[i] == UNVISITED) {
			S.push(i);
			d[i] = ++timeStamp;
			f[i] = VISITED;
			dfs();
		}
	} 
	

	// for (i = 1; i <= n; i++) {
	// 	for (j = 0; j < adj[i].size(); j++)
	// 		cout << " " << adj[i][j];
	// 	cout << "\n" << i <<" size : " << adj[i].size() << "\n";
	// }

	for (i = 1; i <= n; i++) 
		cout << i << " " << d[i] << " " << f[i] <<"\n";

}