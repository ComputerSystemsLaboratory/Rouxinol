#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b, a || b) {
		if (a < b) cout << a << " " << b << endl;
		else cout << b << " " << a << endl;
	}
}