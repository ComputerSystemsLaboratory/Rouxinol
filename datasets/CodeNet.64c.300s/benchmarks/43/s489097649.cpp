
#include<iostream>
#include<vector>
#include <map>
#include <utility>
#include <algorithm>
#include <functional>
#include<string>

using namespace std;

int main() {
	int a, s, d, f, g, h, j, k;
	cin >> a >> s >> d >> f >> g >> h >> j >> k;
	if (a + s + d + f > g + h + j + k) {
		cout << a + s + d + f << endl;
	}
	else {
		cout << g + h + j + k << endl;
	}
	return 0;
}