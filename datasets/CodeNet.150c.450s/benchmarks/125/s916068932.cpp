#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<cstdio>
#include<algorithm>
#define WHITE 0
#define GRAY 1
#define BLACK 2
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

int n, m[100][100] = { 0 }, d[100] = { 0 }, t = 0, nt[100] = { 0 }, f[100] = { 0 };
int color[100] = { WHITE };

int next(int u) {
	FOR(i, nt[u], n) {
		nt[u] = i + 1;
		if (m[u][i]==1){ return i; }
	}
	return -1;
}

int dfs(int r) {
	stack<int>S;
	S.push(r);
	color[r] = GRAY;
	d[r] = ++t;

	while (!S.empty()) {
		int u=S.top();
		int v = next(u); //cout << v << endl;
		if (v != -1) {
			if (color[v]==WHITE)
			{
				S.push(v);
				color[v] = GRAY;
				d[v] = ++t;
			}
		}
		else {
			S.pop();
			color[v] = BLACK;
			f[u] = ++t;
		//	cout << f[v]<<endl;
		}
	}
	return 0;
}
int main()
{
	 cin >> n;
	REP(i, n) {
		int u, k; cin >>u >> k; u--;//
		REP(j, k) {
			int muki; cin >> muki; muki--;//
			m[u][muki] = 1;
			//printf("%d aa%d\n", u, muki);
		}
	}
	REP(i, n) {
		if (color[i] == WHITE) {
			dfs(i);// cout << i << endl;
		}
	}
	REP(i, n) {
		cout << i + 1 << " " << d[i] << " " << f[i] << endl;
	}
	return 0;
}