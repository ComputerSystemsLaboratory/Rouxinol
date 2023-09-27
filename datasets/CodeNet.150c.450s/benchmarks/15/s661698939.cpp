#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, q, S[10000], T, res = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> S[i];
	}
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> T;
		for (int j = 0; j < n; j++) {
			if (T == S[j]) {
				res++;
				break;
			}
		}
	}
	cout << res << endl;
	return 0;
}