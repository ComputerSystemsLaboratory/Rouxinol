#include <iostream>
#include <cstdio>
using namespace std;
#define MAXN 10001
int n, A[MAXN], Rank[MAXN];

void init()
{
	for (int i = 0; i < n; i++) {
		A[i] = i;
		Rank[i] = 0;
	}
}

int findSet(int x)
{
	if (x != A[x]) {
		x = findSet(A[x]);
	}
	return x;
}

void link(int x, int y)
{
	if (Rank[x] > Rank[y]) {
		A[y] = x;
	}else {
		A[x] = y;
		if (Rank[x] == Rank[y]) {
			Rank[y]++;
		}
	}
}

void Union(int x, int y)
{
	link(findSet(x), findSet(y));
}


bool same(int x, int y)
{
	return findSet(x) == findSet(y);
}

int main(int argc, char *argv[]) {
	int m;
	cin >> n >> m;
	init();
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0) {
			Union(b, c);
		}else if (a == 1) {
			if (same(b, c)) {
				printf("1\n");
			}else {
				printf("0\n");
			}
		}
	}
	return 0;
}
