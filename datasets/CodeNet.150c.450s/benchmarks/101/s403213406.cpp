#include<iostream>
using namespace std;
#include<vector>
#include<stack>
#define MAX 100000
int n,m;
vector<int>G[MAX];
stack<int>mp;
int color[MAX];

void dfs(int r,int c){
	mp.push(r);
	color[r] = c;
	while (!mp.empty()){
		int u = mp.top();
		mp.pop();
		for (int i = 0;i < G[u].size();i++){
			int v = G[u][i];
			if (color[v] == -1){
				color[v] = c;
				mp.push(v);
			}
		}
	}
}

void assignColor(){
	int id = 1;
	for (int i = 0;i < n;i++){
		color[i] = -1;
	}
	for (int j = 0;j < n;j++){
		if (color[j] == -1){
			dfs(j,id++);
		}
	}
}

int main()
{
	cin >> n >> m;
	int x,y; 
	for (int i = 0; i < m ;i++){
		cin >> x >> y;
		G[x].push_back(y);
		G[y].push_back(x);
	}
	assignColor();
	cin >> m;
	for (int i = 0 ;i < m;i++){
		cin >> x >> y;
		if (color[x] == color[y]){
			cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
		}
	}
	return 0;
}
