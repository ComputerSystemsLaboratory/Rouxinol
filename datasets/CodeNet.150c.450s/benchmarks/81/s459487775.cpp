#include <bits/stdc++.h>
#define INF 114514810
#define FOR(i, r, n) for(int i=(r); i<(n); i++) 
#define REP(i, n) FOR(i, (0), n)

using namespace std;

int n, a, b, c, t = 0, sum = INF, ans, nodes = 0;
int d[50][50];

int main(){
	while (true){
		cin >> n;
		if (n == 0) break;
		REP(i, 10)
			REP(j, 10)
			d[i][j] = (i == j ? 0 : INF);
		REP(i, n){
			cin >> a >> b >> c;
			d[a][b] = d[b][a] = c;
			nodes = max(nodes, a);
			nodes = max(nodes, b);
		}
		REP(k, 10)
			REP(i, 10)
			REP(j, 10)
			d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
		REP(i, nodes + 1){
			REP(j, nodes + 1) t += d[i][j];
			if (sum > t){
				sum = t;
				ans = i;
			}
			t = 0;
		}
		cout << ans << " " << sum << endl;
		nodes = ans = 0;
		sum = INF;
	}
}