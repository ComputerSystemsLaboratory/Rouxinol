#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
#define loop(i,a,b) for(int i=(a);i<ull(b);++i)
#define rep(i,n) loop(i,0,n)
#define all(a) (a).begin(), (a).end()

const double eps = 1e-10;
const double pi  = acos(-1.0);
const double inf = (int)1e8;

int main(){
	int n;
	while(cin >> n, n){
		int d[15][15];
		rep(i, 15){
			rep(j, 15) d[i][j] = inf;
			d[i][i] = 0;
		}
		int v = -1;
		for(int i=0; i < n; i++){
			int a, b, c;
			cin >> a >> b >> c;
			d[a][b] = c;
			d[b][a] = c;
			v = max(v, max(a+1, b+1));
		}
		rep(k, v) rep(i, v)rep(j, v) d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

		int m = inf, ret = -1;
		for(int i=0; i < v; i++){
			int sum = 0;
			for(int j=0; j< v; j++) if(d[i][j] != inf) sum += d[i][j];
			if(sum < m){m = sum; ret = i;}
		}
		cout << ret << " " << m << endl;
	}
}