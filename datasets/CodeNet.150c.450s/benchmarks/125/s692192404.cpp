#include <bits/stdc++.h>

#define FOR(i, a, b) for(long long int i=(a);i<=(b);i++)
#define RFOR(i, a, b) for(long long int i=(a);i>=(b);i--)
#define MOD 1000000007
#define INF 1000000000 //2000000000
#define LLINF 1000000000000000000 //9000000000000000000
#define PI 3.14159265358979

using namespace std;
typedef long long int ll;
typedef pair< long long int, long long  int> P;

int n;
int u, k, v;
int hour = 1;
int d[101] = {}, f[101] = {};
int gra[101][101] = {};
int color[101] = {};




void dfs(int u) {
	color[u] = 1;
	d[u] = hour;
	hour++;
	FOR(i, 1, n) {
		if (gra[u][i] == 1 && color[i] == 0) {
			dfs(i);
		}
	}
	color[u] = 2;
	f[u] = hour;
	hour++;
}

void dfs_call(void) {

	FOR(i, 1, n) {
		if (color[i] == 0) {
			dfs(i);
		}
	}
}


int main(void) {
	cin >> n;
	
	FOR(i, 1, n) {
		cin >> u >> k;
		FOR(t, 1, k) {
			cin >> v;
			gra[u][v] = 1;
		}
	}
	d[1] = hour;

	dfs_call();

	FOR(i, 1, n) {
		cout << i << " " << d[i] << " " << f[i] << endl;
	}

	return 0;
}
