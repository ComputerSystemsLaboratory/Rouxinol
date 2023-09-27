#include <cstdio>
#include <vector>
using namespace std;
using ll = long long;

int main() {
	int N, K;
	scanf("%d %d", &N, &K);
	vector<ll> A(N);
	for (int i = 0; i < N; i++) {
		scanf("%lld", &A[i]);
	}
	for (int i = 0; i < N - K; i++) {
		if (A[i] < A[i + K]) {
			printf("Yes\n");
		} else {
			printf("No\n");
		}
	}
	return 0;
}
