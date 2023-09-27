#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;
using v1 = vector<int>;
using vl = vector<long long>;
using v2 = vector<vector<int>>;
using v3 = vector<vector<char>>;

int n;
int m[101][101];

void daiksutora(){
	int p[101];
	int d[101];
	int color[101];
	rep(i, n){
		d[i] = 1e8;
		color[i] = 0;
	}
	d[0] = 0;
	p[0] = -1;
	while(1){
		int mincost = 1e8;
		int u = -1;
		rep(i, n){
			if(color[i] != -1 && d[i] < mincost){
				mincost = d[i];
				u = i;
			}
		}
		if(u == -1) break;
		color[u] = -1;
		rep(v, n){
			if(color[v] != -1 && m[u][v] != -1){
				if(d[u]+m[u][v] < d[v]){
					d[v] = d[u]+m[u][v];
					color[v] = 1;
					p[v] = u;
				}
			}
		}
	}
	rep(i, n){
		cout << i << " " << d[i] << endl;
	}
}

int main(){
	cin >> n;
	rep(i, n){
		rep(j, n){
			m[i][j] = -1;
		}
	}
	rep(i, n){
		int u, k, v, c;
		cin >> u >> k;
		rep(i, k){
			cin >> v >> c;
			m[u][v] = c;
		}
	}
	daiksutora();
}

