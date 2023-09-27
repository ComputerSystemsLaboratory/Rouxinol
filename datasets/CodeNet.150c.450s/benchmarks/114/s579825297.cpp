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
int d[101];
int color[101];
int p[101];

int prim(){
	rep(i, n){
		d[i] = 1e5;
		color[i] = 0;
	}
	d[0] = 0;
	p[0] = -1;
	while(1){
		int mincost = 1e5;
		int u = -1;
		rep(i, n){
			if(d[i] < mincost && color[i] != -1){
				mincost = d[i];
				u = i;
			}
		}
		color[u] = -1;
		if(u == -1) break;
		rep(v, n){
			if(color[v] != -1 && m[u][v] != -1){
				if(m[u][v] < d[v]){
					d[v] = m[u][v];
					p[v] = u;
					color[v] = 1;
				}
			}
		}
	}
	int sum = 0;
	rep(i, n){
		sum += d[i];
	}
	return sum;
}

int main(){
	cin >> n;
	rep(i, n){
		rep(j, n){
			cin >> m[i][j];
		}
	}
	cout << prim() << endl;
}

