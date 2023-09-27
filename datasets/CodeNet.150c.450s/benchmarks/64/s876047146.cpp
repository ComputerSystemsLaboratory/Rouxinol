#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

int n, *A, q, M;

bool dfs(int i, int sum) {
	if (sum > M) return false;
	if (i == n) return (sum == M);
	if (dfs(i + 1, sum + A[i])) return true;
	if (dfs(i + 1, sum)) return true;
	return false;
}

int main() {
	cin >> n;
	A = new int[n];
	for (int i = 0; i < n; i++)
		cin >> A[i];

	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> M;
		if (dfs(0, 0))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	delete[] A;
	return 0;
}