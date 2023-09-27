//be name khoda
//Pedram Sadeghian
// :)
#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5 + 7, maxM = 1e6;
int n, m, a, b, c, par[maxN], high[maxN], ccount, ans, /*dp[maxN][maxN]*/ mss;
vector < pair <int, int> > G[maxN];
vector < pair <int, pair <int, int> > > K, answer;

int root (int s){
	if (par[s] == s) return s;
	par[s] = root(par[s]);
	return par[s];
}

void merrge(int s, int e){
	if (high[s] < high[e])
		swap(s, e);
	if (high[s] == high[e])
		high[s] = high[e] = 1;
	par[root(e)] = s;
}

int DFS(int s, int e, int h){
	for (int i = 0; i < G[s].size(); i++){
		if (G[s][i].first == e) continue;
		//dp[h][G[s][i].first] = max(dp[h][G[s][i].first], max(dp[h][s], G[s][i].second));
		DFS(G[s][i].first, s, h);
	}
}

int main(){
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 0; i < m; i++){
		cin >> a >> b >> c;
		//a--; b--;
		K.push_back(make_pair(c, make_pair(a, b)));
	}
	for (int i = 0; i < n; i++){
		par[i] = i;
		high[i] = 1;
	}
	sort(K.begin(), K.end());
	for (int i = 0; i < K.size(); i++){
		if (ccount == n - 1){
			answer.push_back(K[i]);
			continue;
		}
		if (root(K[i].second.first) == root(K[i].second.second)){
			answer.push_back(K[i]);
			continue;
		}
		ccount++;
		merrge(K[i].second.first, K[i].second.second);
		mss += K[i].first;
		G[K[i].second.first].push_back(make_pair(K[i].second.second, K[i].first));
		G[K[i].second.second].push_back(make_pair(K[i].second.first, K[i].first));
	}/*
	if (ccount != n - 1){
		cout << "disconnected";
		return 0;
	}
	for (int i = 0; i < n; i++)
		DFS(i, -1, i);
	for (int i = 0; i < answer.size(); i++){
		ans = min(ans, mss - dp[answer[i].second.first][answer[i].second.second] - answer[i].first);
	}*/
	cout << mss << endl;
}