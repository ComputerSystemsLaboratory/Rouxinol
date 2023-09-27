#include <bits/stdc++.h>
using namespace std;

int main()
{
	int res = 0, len;
	string W, T;
	cin >> W;
	len = W.size();
	for (int i = 0; i < len; i++) {
		if (W[i] >= 'A' && W[i] <= 'Z') {
			W[i] += 'a' - 'A';
		}
	}
	while (cin >> T, T != "END_OF_TEXT") {
		if (len == T.size()) {
			bool flag = true;
			for (int i = 0; i < len; i++) {
				if (T[i] >= 'A' && T[i] <= 'Z') {
					T[i] += 'a' - 'A';
				}
			}
			if (W == T) {
				res++;
			}
		}
	}
	cout << res << endl;
	return 0;
}