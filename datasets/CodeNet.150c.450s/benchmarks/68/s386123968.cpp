#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>

using LL = long long;
using namespace std;

int N;
int A[123456];


int main() {
	while (cin >> N, N) {
		for (int i = 0; i < N; ++i) {
			cin >> A[i];
		}
		sort(A, A + N);
		int ans = 123456789;
		for (int i = 1; i < N; ++i) {
			ans = min(ans, A[i] - A[i - 1]);
		}
		cout << ans << endl;
	}
	return 0;
}
