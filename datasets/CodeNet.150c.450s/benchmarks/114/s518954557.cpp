#define _USE_MATH_DEFINES

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>

using namespace std;

typedef pair<long long int, long long int> P;
long long int INF = 1e18;
#define MAX_V 200

long long int cost[MAX_V][MAX_V]; // cost[u][v] は頂点uからvへのコスト
long long int mincost[MAX_V];
bool used[MAX_V];
int V;// Vは頂点数

// 最小全域木であり、O(V^2)

// 最初にすべての頂点に対するcostを計算しておくこと

long long int prim(){
	
	for(int i = 0; i < V; i++){
		mincost[i] = INF;
		used[i] = false;
	}
	
	mincost[0] = 0;
	
	long long int total = 0;
	
	while(true){
		
		int add_v = -1;
		
		for(int u = 0; u < V; u++){
			if(!used[u] && (add_v == -1 || mincost[u] < mincost[add_v])){
				add_v = u;
			}
		} // 追加する頂点を決定
		
		if(add_v == -1){
			break;
		} // 更新する頂点がない場合、終了
		used[add_v] = true;
		total += mincost[add_v];
		
		for(int u = 0; u < V; u++){
			mincost[u] = min(mincost[u], cost[add_v][u]);
		} // 集合の外の頂点への最小コストを更新
	}
	return total;
}

int main(){
	
	long long int ans;
	
	cin >> V;
	
	for(int i = 0; i < V; i++){
		for(int j = 0; j < V; j++){
			cin >> cost[i][j];
			if(cost[i][j] == -1){
				cost[i][j] = INF;
			}
		}
	}
	
	ans = prim();
	cout << ans << endl;
	
	return 0;
}
