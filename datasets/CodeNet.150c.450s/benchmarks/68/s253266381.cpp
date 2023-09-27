#include "bits/stdc++.h"
#define INF (1<<30)
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int n;
	while (cin >> n, n) {
		vector<int> a(n);
		for (int i = 0; i < n;i++) cin >> a[i];
		int Ans = INF;
		for (int i = 0; i < n;i++) {
			for (int j = i + 1; j < n; j++) {
				Ans = min(Ans, abs(a[i] - a[j]));
			}
		}
		cout << Ans << endl;
	}
}