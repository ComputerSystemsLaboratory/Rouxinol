#include <cstdio>
#include <iostream>

using namespace std;

int m, n, A[20] = {0};

int solve(int sum,int i) {
	if (sum == m) return true;
	if (i == n) return false;
	return solve(sum, i + 1) || solve(sum + A[i], i + 1);


}

int main() {

	int q, ans;

	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> A[i];
	}

	cin >> q;

	for (int i = 0;i < q;i++) {
		cin >> m;
		ans = solve(0,0);
			if (ans != 0) {
				cout << "yes" << endl;
			}
			else cout << "no" << endl;
	}

		return 0;
}