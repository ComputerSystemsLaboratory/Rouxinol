#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<cstdio>
#include<map>
#pragma warning(disable : 4996)
#define P pair<int,int>
using namespace std;

bool g[1000][1000]{};
int x[] = { -1,0,0,1 }, y[] = { 0,-1,1,0 };
map<int, P>j;
int a, b, c;
int meiro(int d) {
	queue<P> e;
	vector<vector<int>>f(a, vector<int>(b));
	for (int g = 0; g < a; g++) {
		for (int h = 0; h < b; h++) {
			f[g][h] = 1 << 29;
		}
	}
	e.push(j[d]);
	f[(j[d]).first][(j[d]).second] = 0;
	while(e.size()) {
		P p = e.front(); e.pop();
		if (p == j[d+1])break;
		for (int q = 0; q < 4; q++) {
			int l = p.first + x[q];
			int r = p.second + y[q];
			if (l >= 0 && l < a&&r >= 0 && r < b&&g[l][r] && f[l][r] == 1 << 29) {
				P w(l, r);
				e.push(w);
				f[l][r] = f[p.first][p.second] + 1;
			}
		}
	}
	return f[(j[d + 1]).first][(j[d + 1]).second];
}
int main() {
	scanf("%d%d%d", &a, &b, &c);
	for (int d = 0; d < a; d++) {
		for (int e = 0; e < b; e++) {
			char f;
			cin >> f;
			if (f == 'X')g[d][e] = false;
			else if (f == '.')g[d][e] = true;
			else if (f == 'S') {
				g[d][e] = true;
				P h(d, e);
				j[0] = h;
			}
			else {
				g[d][e] = true;
				P h(d, e);
				j[f - 48] = h;
			}
		}
	}
	int s = 0;
	for (int l = 0; l < c; l++) {
		s += meiro(l);
	}
	printf("%d\n", s);
}