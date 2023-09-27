#include "bits/stdc++.h"

using namespace std;

#define pb push_back
#define mp make_pair
constexpr int INF = 1e9 + 1;
constexpr int MOD = 1000000007;
typedef long long ll;
typedef unsigned long long ull;

constexpr int dx[4] = {1, 0, -1, 0};
constexpr int dy[4] = {0, 1, 0, -1};

int cnt = 0;
void marge(vector<int> &A, int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	vector<int> L(n1), R(n2);
	for(int i = 0; i < n1; i++) {
		L[i] = A[left + i];
	}
	for(int i = 0; i < n2; i++) {
		R[i] = A[mid + i];
	}
	L.push_back(INF);
	R.push_back(INF);
	int i = 0, j = 0;
	for(int k = left; k < right; k++) {
		cnt++;
		if (L[i] <= R[j]) {
			A[k] = L[i++];
		} else {
			A[k] = R[j++];
		}
	}
}

void margesort(vector<int> &A, int left, int right) {
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		margesort(A, left, mid);
		margesort(A, mid, right);
		marge(A, left, mid, right);
	}
}

int main() {
	int N;
	cin >> N;
	vector<int> A;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		A.push_back(a);
	}
	margesort(A, 0, N);
	for (int i = 0; i < N; i++) {
		cout << A[i];
		if (i != N - 1) cout << " ";
	}
	cout << endl;
	cout << cnt << endl;

	return 0;
}

