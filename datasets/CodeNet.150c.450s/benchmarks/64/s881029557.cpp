#include<iostream>
#include<algorithm>
using namespace std;

int solve(int n, int A[],int m,int i, int num) {
	for (; i < n; i++) {
		if (A[i] == m) {
			return 1;
		}
		if (num + A[i] < m) {
			if (solve(n, A, m, i + 1, num + A[i])) {//m??????????????¨???
				return 1;
			}
		} else if (num + A[i] == m) {
			return 1;
		}

	}
	return 0;
}

int main(void) {
	int n, q, A[2001], m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	cin >> q;
	sort(A, A + n);
	reverse(A, A + n);
	
	for (int i = 0; i < q; i++) {
		cin >> m;
		if (solve(n, A, m,0,0)) cout << "yes\n";
		else cout << "no\n";
	}
	return 0;
}