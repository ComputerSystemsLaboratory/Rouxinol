#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <random>
#include <chrono>
 
using namespace std;
using namespace __gnu_pbds;
 
#define endl '\n'
 
typedef long long ll;
typedef pair<int, int> pii;
typedef tree<int, null_type,less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
template<typename T>
static T randint(T lo, T hi){
	return uniform_int_distribution<T>(lo, hi)(rng);
}




int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
 
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n, m;
	cin >> n >> m;

	vector<vector<int>> g(n + 1);
	for(int i = 0, a, b; i < m; i++){
		cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
	}

	vector<int> d(n + 1, -1);
	d[1] = 0;

	queue<int> Q;
	Q.push(1);

	int cnt = 0;

	while(!Q.empty()){
		int u = Q.front();Q.pop();
		cnt++;
		for(auto &v : g[u])
			if(d[v] == -1){
				d[v] = d[u] + 1;
				Q.push(v);
			}
	}

	if(cnt == n){
		cout << "Yes" << endl;
		vector<int> ans(n + 1);
		for(int u = 2; u <= n; u++){
			int mx = n + 5, v = -1;
			for(auto &x : g[u]){
				if(d[x] < mx){
					mx = d[x];
					v = x;
				}
			}
			cout << v << endl;
		}
	}
	else{
		cout << "No" << endl;
	}

	return 0;	
}