#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <sstream>

using namespace std;
int main() {
	int n;
	cin >> n;
	vector<bool> a(52);
	for (int i = 0; i < n; i++) {
		int x; string s;
		cin >> s >> x;
		if (s == "H")x += 13;
		if (s == "C")x += 26;
		if (s == "D")x += 39;
		a[x - 1] = true;
	}
	vector<string> b(4);
	b[0] = "S"; b[1] = "H"; b[2] = "C"; b[3] = "D";
	for (int i = 0; i < 52; i++) {
		if (!a[i]) {
			cout << b[i / 13] << " " << i % 13 + 1 << endl;
		}
	}
	return 0;
}
