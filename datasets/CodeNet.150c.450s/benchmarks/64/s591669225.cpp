#include <bits/stdc++.h>
using namespace std;
int n, q, A[20], m;
bool res[40001];
void Brute_Force() {
	for (int i = 0; i < (1 << n); i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			if (i & (1 << j)) {
				sum += A[j];
			}
		}
		res[sum] = true;
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
	Brute_Force();
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> m;
		cout << (res[m] ? "yes" : "no") << endl;
	}
	return 0;
}