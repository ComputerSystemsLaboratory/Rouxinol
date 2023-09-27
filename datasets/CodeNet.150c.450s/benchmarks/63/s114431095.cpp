#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

template <typename TYPE>
void print_vec(const vector<TYPE>& v){
	for(int i=0; i<v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
}

template <typename TYPE>
void print_vec2(const vector<vector<TYPE>>& v){
  cout << endl; cout << "       ";
  for(int i=0; i<v[0].size(); i++) cout << i << "   "; 
  cout << endl;
	for(int i=0; i<v.size(); i++){
		cout << "i=" << i << ":   ";
		for(int j=0; j<v[i].size(); j++){
			if(v[i][j] == 0) cout << "\x1B[0m" << v[i][j] << "   ";
      else cout << "\x1B[31m" << v[i][j] << "   ";//https://stackoverrun.com/ja/q/12618775
		}
		cout << "\x1B[0m" << endl;
	}
}

int main(){
	int V, E, r;
	cin >> V >> E >> r;
	typedef pair<int, ll> LP;
	//vec[i][j]: iとつながる道路とそのコスト
	vector<vector<LP>> vec(V, vector<LP>());
	for(int i=0; i<E; i++){
		int s, t, d;
		cin >> s >> t >> d;
		vec[s].emplace_back(t, d);
		//vec[t].emplace_back(s, d);//有向グラフでしたのでコメントアウト
	}

	const ll INF = 1001001001001001001;
	vector<ll> ans(V, INF);
	ans[r] = 0;
	typedef pair<int, int> P;
	//st.first: 注目ノード， second: 注目ノードの親
	//stack<P> st;
	//st.push(P(r, -1));
	queue<P> qu;
	qu.push(P(r, -1));
	// while(!st.empty()){
	while(!qu.empty()){
		// int node = st.top().first;
		// int parent = st.top().second;
		// st.pop();
		int node = qu.front().first;
		int parent = qu.front().second;
		qu.pop();

		for(int i=0; i<vec[node].size(); i++){
			int child = vec[node][i].first;
			if(child == parent) continue;
			int cost = vec[node][i].second;
			if(ans[child] <= ans[node]+cost) continue;
			ans[child] =  ans[node]+cost;
			// st.push(P(child, node));
			qu.push(P(child, node));
		}
	}
	for(int i=0; i<V; i++){
		if(ans[i] == INF) cout << "INF" << endl;
		else		cout << ans[i] << endl;
	}

}


