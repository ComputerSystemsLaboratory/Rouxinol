#include <iostream>
using namespace std;
static int N_MAX = 100;

void p(int n, int A[]) {
	for (int i = 0; i < n; ++i) {
		cout << A[i];
		if (i != n - 1) {
			cout << " ";
		}
	}
	cout << endl;
}

int main() {
	int n;
	int A[N_MAX];
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> A[i];
	}
	p(n, A);
	for (int i = 1; i < n; ++i) {
		int v = A[i];
		int j = i - 1;
		while (j >= 0 && A[j] > v) {
			A[j + 1] = A[j];
			--j;
		}
		A[j + 1] = v;
		p(n, A);
	}
}