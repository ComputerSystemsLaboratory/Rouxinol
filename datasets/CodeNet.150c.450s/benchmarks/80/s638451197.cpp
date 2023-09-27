#include <bits/stdc++.h>
using namespace std;
int a, b, c, d;
int main() {
	int r = 0;
	for(int i = 0; i < 2; i++) {
		cin >> a >> b >> c >> d;
		r = max(r, a + b + c + d);
	}
	cout << r << endl;
	return 0;
}