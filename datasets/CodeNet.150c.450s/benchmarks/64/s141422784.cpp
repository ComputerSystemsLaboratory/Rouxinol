#include <bits/stdc++.h>
using namespace std;
int n, q, A[20], m;
bool res[40001];

void DP() {
	res[0] = true;
	for (int i = 0; i < n; i++) {
		for (int j = 40000 - A[i]; j >= 0;j--) {
			if (res[j]) {
				res[j + A[i]] = true;
			}
		}
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
	DP();
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> m;
		cout << (res[m] ? "yes" : "no") << endl;
	}
	return 0;
}