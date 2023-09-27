#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#define BIG 1000000000
#define SIZE 40
using namespace std;

int n;
int A[SIZE];

int solve(int i, int m) {
	if (m == 0) return 1;
	if (i >= n) return 0;
	int res = solve(i + 1, m) || solve(i + 1, m - A[i]);
	return res;
}

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &A[i]);
	int q;
	scanf("%d", &q);
	int m;
	for (int i = 0; i < q; i++) {
		scanf("%d", &m);
		if (solve(0, m)) cout << "yes\n";
		else cout << "no\n";
	}



}