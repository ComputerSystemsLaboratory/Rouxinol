#include <cstdio>
#include <iostream>

using namespace std;

int main() {

	int n;
	scanf("%d", &n);

	int S[n];
	for (int i = 0; i < n; ++i) {
		scanf("%d", &S[i]);
	}

	int cnt = 0;

	int q;
	scanf("%d", &q);
	for (int i = 0; i < q; ++i) {
		int T;
		scanf("%d", &T);
		for (int j = 0; j < n; ++j) {
			if (S[j] == T) {
				++cnt;
				break;
			}
		}
	}

	cout << cnt << endl;
	return 0;
}