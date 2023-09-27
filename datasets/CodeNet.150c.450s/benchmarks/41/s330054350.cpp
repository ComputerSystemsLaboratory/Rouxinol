#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<algorithm>
typedef long long ll;
#define INF 100000000000000
using namespace std;

int main() {
	ll a[100][100];
	int b, c;
	scanf("%d%d", &b, &c);
	for (int d = 0; d < b; d++) {
		for (int e = 0; e < b; e++) {
			a[d][e] = INF;
		}
		a[d][d] = 0;
	}
	for (int f = 0; f < c; f++) {
		int g, h, i;
		scanf("%d%d%d", &g, &h,&i);
		a[g][h] = i;
	}
	for (int x = 0; x < b; x++) {
		for (int y = 0; y < b; y++) {
			for (int z = 0; z < b; z++) {
			if(a[y][x]!=INF&&a[x][z]!=INF)	a[y][z] = min(a[y][z], a[y][x] + a[x][z]);
			}
		}
	}
	bool s = false;
	for (int x = 0; x < b; x++)if (a[x][x] < 0)s = true;
	if (s) {
		printf("NEGATIVE CYCLE\n");
	}
	else {
		for (int x = 0; x < b; x++) {
			for (int y = 0; y < b - 1; y++) {
				if (a[x][y] == INF)printf("INF ");
				else printf("%d ", a[x][y]);
			}
			if (a[x][b-1] == INF)printf("INF\n");
			else printf("%d\n", a[x][b-1]);
		}
	}
}