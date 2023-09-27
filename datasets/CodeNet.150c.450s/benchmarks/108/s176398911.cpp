#include "bits/stdc++.h"
using namespace std;
#define rep(i, n) for(int i=0;i<(n);i++)
const int INF = 1001001001;
int n, u, k;
int D[100];
vector<int> edges[100];
void bfs(int src) {
	
	
	queue<int> Q;	
	Q.push(src);
	D[src] = 0;//D[*]が始点から点*への距離
	while (!Q.empty()) {
		int cur = Q.front();//curは今取り扱ってる点
		Q.pop();
		
		for (int dst = 0; dst < n; dst++) {//dstはcurから移動可能な点
			vector<int>::iterator result = find(edges[cur].begin(), edges[cur].end(), dst);
			if (result != edges[cur].end() && D[dst] == INF) {
				D[dst] = D[cur] + 1;
				Q.push(dst);
			}
		}
	}
}

int main() {
	cin >> n; //n頂点
	

	for (int i = 0; i < n; i++)//iは頂点
	{
		cin >> u >> k;
		for (int j = 0; j < k; j++)
		{
			int l;
			cin >> l;
			edges[u - 1].push_back(l-1);
		}//入力終わり
		D[i] = INF;
	}
		bfs(0);
	for (int i = 0; i < n; i++) {
		if (D[i] != INF)cout << i + 1 << " " << D[i] << endl;
		else cout << i + 1 << " " << -1 << endl;
	}
	return 0;
}
