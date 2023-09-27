#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
	vector<int> graph[100];
	queue<int> que;
	int d[100];
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
		d[i] = -1;
	}
	d[0] = 0;
	que.push(0);
	while(!que.empty()){
		int num = que.front();
		que.pop();
		for(int i = 0;i < graph[num].size();i++){
			if(d[graph[num][i]] == -1) {
				d[graph[num][i]] = d[num] + 1;
				que.push(graph[num][i]);
			}
		}
	}
	for(int i = 0;i < n;i++){
		cout << i + 1 << " " << d[i] << endl;
	}
	return 0;
}