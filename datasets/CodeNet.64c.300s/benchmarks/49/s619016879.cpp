#include <iostream>
#include <cmath>

using namespace std;

void solve() {
	int a, b;
	while (cin >> a) {
		cin >> b;
		cout << floor(1 + log10(a + b)) << endl;
	}
}


int main() {
	solve();
	return 0;
}