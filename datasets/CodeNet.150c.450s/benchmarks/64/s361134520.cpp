#include<iostream>
using namespace std;

int N, M;

bool solve(int A[], int i, int m) {
	if (m == 0) return true;
	if (i == N) return false;
	return solve(A, i + 1, m) || solve(A, i + 1, m - A[i]);
}

int main() {

	int m;

	// input number
	cin >> N;
	int* A = new int[N];
	for (int i = 0; i < N; i++) scanf("%d", &A[i]);
	
	// input count of target
	cin >> M;
	for (int i = 0; i < M; i++) {
		scanf("%d", &m);
		bool result = solve(A, 0, m);
		cout << (result ? "yes" : "no") << endl;
	}
}