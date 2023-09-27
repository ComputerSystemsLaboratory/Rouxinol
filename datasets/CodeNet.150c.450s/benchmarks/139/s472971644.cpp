#include<iostream>
#include <bits/stdc++.h>
const int N = 1e6 + 7 ;
using namespace std;

int n,m;
int u,v;
int ans[N] = {0};
vector<int> s[N];

void bfs(){
	queue<int> q;
	q.push(1);
	ans[1] = 1;
	while(!q.empty()){
		int tmp = q.front();
		q.pop();
		for(auto w : s[tmp]){
			if(ans[w] == 0){
				ans[w] = tmp;
				q.push(w);
			}
		}
	}
}

int main(){
	cin >> n >> m;
	for(int i = 0; i< m; i++){
		cin >> u >> v;
		s[v].push_back(u);
		s[u].push_back(v);
	}
	bfs();
	for(int i = 1; i<=n; i++){
		if(ans[i] == 0){
			cout << "No";
			return 0;
		}
	}
	cout << "Yes" << endl;
	for(int i = 2; i<= n; i++){
		cout << ans[i] << endl;
	}
	return 0;
}
