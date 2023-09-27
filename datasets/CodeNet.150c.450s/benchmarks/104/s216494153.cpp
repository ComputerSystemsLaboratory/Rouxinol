#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int w, n, a, b;

	cin >> w >> n;
	vector<int> hlines(w);
	for (int i = 0; i < w; ++i) {
		hlines.at(i) = i + 1;
	}

	for (int i = 0; i < n; ++i) {
		cin >> a;
		cin.ignore();
		cin >> b;
		--a, --b;
		swap(hlines.at(a), hlines.at(b));
	}
	for (int i = 0; i < w; ++i) {
		cout << hlines.at(i) << endl;
	}
	return 0;
}