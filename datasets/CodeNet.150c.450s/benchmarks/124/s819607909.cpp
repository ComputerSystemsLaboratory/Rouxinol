//compiledef
#include <bits/stdc++.h>
#define rep(i, n) for(i=0;i<(n);i++)
#define per(i, n) for(i=(n);i>0;i--)
#define repx(i, n, x) for(i=(x);i<(n);i++)
#define xper(i, n, x) for(i=(n);i>(x);i--)
#define pback push_back

//c++def
using namespace std;
typedef long long int ll;
const ll MOD = 1e9+7;
const ll MOD2 = 998244353;
int n;
int w[10003][10003];
void daikustra(){
	int color[10003];
	int d[10003];
	int i;
	int v;
	int u= -1;
	rep(i, n){
		d[i] = 2e9;
		color[i] = 0;
	}
	d[0] = 0;
	color[0] = 1;
	while(999){
		int mincost = 2e9;
		rep(i, n){
			if(mincost>d[i] && color[i] !=2){
				u = i;
				mincost =d[i];
			}
		}
		if(mincost==2e9) break;
		color[u] = 2;
		for(v=0;v<n;v++){
			if(color[v] !=2&&w[u][v] != 2e9){
				if((d[u] + w[u][v])<d[v]){
					d[v] = d[u] + w[u][v];
					color[v] =1;
				}
			}
		}
	}
	rep(i, n){
		cout << i << " ";
		if(d[i] == 2e9)
			cout << -1;
		else
			cout<< d[i];
		cout <<endl;
	}
}

int main(){
	int i, j, k, l, u, v;
	cin >> n;
	rep(i, n)rep(j, n)w[i][j] = 2e9;
	rep(i, n){
		cin >> k >> l;
		rep(j, l){
			cin >> u >> v;
			w[k][u] = v;
		}
	}
	daikustra();
}


