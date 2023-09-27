#include <bits/stdc++.h>

using namespace std;

int main() {
	int N, M; cin >> N >> M;
	vector<int> v(N);
	for (int i = 0; i < N; ++i) {
		v[i] = i;
	}
	for (int i = 0; i < M; ++i) {
		int a, b; scanf("%d,%d", &a, &b); --a, --b;
		swap(v[a], v[b]);
	}
	for (int i = 0; i < N; ++i) {
		cout << v[i]+1 << endl;
	}
}