#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;
using v1 = vector<int>;
using vl = vector<long long>;
using v2 = vector<vector<int>>;
using v3 = vector<vector<char>>;

int N;
vector<int> G[100000];
int color[100000];

void dfs(int s, int c){
	stack<int> S;
	S.push(s);
	color[s] = c;
	while(!S.empty()){
		int u = S.top();
		S.pop();
		rep(i, G[u].size()){
			int p = G[u][i];
			if(color[p] == 0){
				color[p] = c;
				S.push(p);
			}
		}
	}
}

void colorAssign(){
	rep(i, N){
		color[i] = 0;
	}
	int id = 1;
	rep(i, N){
		if(color[i] == 0){
			dfs(i, id);
			id++;
		}
	}

}

int main(){
	int m, s, t;
	cin >> N >> m;
	rep(i, m){
		cin >> s >> t;
		G[s].push_back(t);
		G[t].push_back(s);
	}
	colorAssign();
	int q;
	cin >> q;
	rep(i, q){
		cin >> s >> t;
		if(color[s] == color[t]) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}

