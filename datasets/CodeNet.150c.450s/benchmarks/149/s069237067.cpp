#include <iostream>
#include <cstdio>
using namespace std;
#define MAXN 10001

int n, A[MAXN];

void init()
{
	for (int i = 0; i < n; i++) {
		A[i] = i;
	}
}

int findFather(int x)
{
	int a = x;
	while (x != A[x]) {
		x = A[x];
	}
	while (a != A[a]) {
		//int z = a;
		A[a] = x;
		a = A[a];
	}
	return x;
}

void Union(int x, int y)
{
	int a = findFather(x);
	int b = findFather(y);
	if (a != b) {
		A[a] = b;
	}
}

bool same(int x, int y)
{
	return findFather(x) == findFather(y);
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
