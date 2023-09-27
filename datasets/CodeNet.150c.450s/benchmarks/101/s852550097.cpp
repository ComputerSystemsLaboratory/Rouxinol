#include <bits/stdc++.h>

using namespace std;
//int graph[100005][100005]; <-CompileError????????????????????????
vector<int> graph[100005];
int d[100005];
int color[100005];	
void bfs(int s, int n, int gpc){
	queue<int> Q;
	for(int i=0;i<n;i++){
		d[i] = 2e9;
	}
	color[s] = -1;
	d[s] = 0;
	Q.push(s);
	while(Q.size()!=0){
		int u = Q.front();
		Q.pop();
		for(int i=0;i<(int)graph[u].size();i++){
			int v = graph[u][i];
			if(color[v] == -2){
				color[v] = -1;
				d[v] = d[u] +1;
				Q.push(v);
			}
		}
		color[u] = gpc;
	}
}
void check(int n){
	int group = 0;
	for(int i=0;i<n;i++) color[i] = -2;
	for(int u=0;u<n;u++){
		if(color[u] == -2)bfs(u, n, group++);
	}
}

int main(){
	int n, m;
	cin >> n >> m;
	for(int i=0;i<m;i++){
		int num;
		int tmp;
		cin >> num >> tmp;
		graph[num].push_back(tmp);
		graph[tmp].push_back(num);
	}
	check(n);
	int q;
	cin >> q;
	for(int i=0;i<q;i++){
		int s, t;
		cin >> s >> t;
		if(color[s] == color[t]) cout << "yes"<<endl;
		else cout <<"no" << endl;
	}
}

