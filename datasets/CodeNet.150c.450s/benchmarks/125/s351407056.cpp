#include <iostream>
#include <vector>
using namespace std;

vector<int> graph[100];
int start[100],endt[100];
int cnt;

void dfs(int num){
	start[num] = ++cnt;
	for(int i = 0;i < graph[num].size();i++){
		if(graph[num][i] != num && !start[graph[num][i]] && !endt[graph[num][i]]) dfs(graph[num][i]);
	}
	endt[num] = ++cnt;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int now,m;
		cin >> now >> m;
		for(int j = 0;j < m;j++){
			int t;
			cin >> t;
			graph[now - 1].push_back(t - 1);
		}
	}
	dfs(0);
	for(int i = 0;i < n;i++){
		if(!endt[i]) dfs(i);
	}
	for(int i = 0;i < n;i++){
		cout << i + 1 << " " << start[i] << " " << endt[i] << endl;
	}
	return 0;
}