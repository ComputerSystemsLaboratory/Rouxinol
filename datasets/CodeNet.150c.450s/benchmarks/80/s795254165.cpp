#include <bits/stdc++.h>

using namespace std;

int main() {
	int s1 = 0, s2 = 0;
	for (int i = 0; i < 4; ++i) {
		int a; cin >> a;
		s1 += a;
	}
	for (int i = 0; i < 4; ++i) {
		int a; cin >> a;
		s2 += a;
	}
	cout << max(s1, s2) << endl;
}