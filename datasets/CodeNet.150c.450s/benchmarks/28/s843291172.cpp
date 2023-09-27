#include<iostream>
using namespace std;


int check(long P, int A[], int n, int k) {
	int i = 0;
	for (int j = 0; j < k; j++) {
		long sum = 0;
		while (sum + A[i] <= P) {
			sum += A[i];
			i++;
			if (i == n) return n;
		}
	}
	return i;
}

long solve(int A[], int n, int k) {
	long left = 0;
	long right = n * 10000;
	long mid;
	while (right - left > 1) {
		mid = (left + right) / 2;
		long t = check(mid, A, n, k);
		if (t >= n) right = mid;
		else left = mid;
	}
	return right;
}

int main() {
	int n, k;
	cin >> n >> k;
	int A[n];
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	long ans = solve(A, n, k);
	cout << ans <<endl;

	return 0;
}