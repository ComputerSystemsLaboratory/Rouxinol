#define _USE_MATH_DEFINES

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <list>

long long int INF = 1e18;
using namespace std;

typedef pair<long long int, long long int> P;

#define MAX_N 200000

int par[MAX_N];
int rnk[MAX_N];

// 初期化
void init(int n){
	for(int i = 0; i < n; i++){
		par[i] = i;
		rnk[i] = 0;
	}
}

// x の親を返す
int find(int x){
	if(par[x] == x){
		return x;
	}
	return par[x] = find(par[x]);
}

// x と y を併合する
void unite(int x, int y){
	int x_par = find(x);
	int y_par = find(y);
	if(x_par == y_par){
		return;
	}
	
	if(rnk[x_par] < rnk[y_par]){
		par[x_par] = y_par;
	}else{
		par[y_par] = x_par;
		if(rnk[x_par] == rnk[y_par]){
			rnk[x_par]++;
		}
	}
}

// x, y が同じグループか判定
bool same(int x, int y){
	return (find(x) == find(y));
}

int main(){
	
	int n, m;
	cin >> n >> m;
	
	init(n);
	
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		unite(x, y);
	}
	
	int q;
	cin >> q;
	
	for(int i = 0; i < q; i++){
		int x, y;
		cin >> x >> y;
		if(same(x, y)){
			cout << "yes" << endl;
		}else{
			cout << "no" << endl;
		}
	}
	
	return 0;
}
