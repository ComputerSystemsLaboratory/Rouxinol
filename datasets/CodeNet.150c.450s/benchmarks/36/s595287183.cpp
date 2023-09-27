#include "bits/stdc++.h"
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int d;
	while (cin >> d) {
		int area = 0;
		for (int x = d; x <= 600 - d;x += d) {
			area += x*x*d;
		}
		cout << area << endl;
	}
}