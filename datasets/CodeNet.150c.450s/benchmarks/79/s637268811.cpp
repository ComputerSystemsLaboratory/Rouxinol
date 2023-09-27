#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

vector<int> huda(55);

void shuffle(int p,int c) {
	vector<int> tmp(p - 1);
	for (int i = 0; i < p - 1; ++i) tmp[i] = huda[i];
	for (int i = 0; i < c; ++i) huda[i] = huda[i + p - 1];
	for (int i = 0; i < p - 1; ++i) huda[c + i] = tmp[i];
}

int main() {
	int n, r;
	while (cin >> n >> r && n != 0 && r != 0) {
		for (int i = 1; i <= n; ++i) huda[n - i] = i;
		for (int i = 0; i < r; ++i) {
			int p, c;
			cin >> p >> c;
			shuffle(p, c);
		}
		cout << huda[0] << endl;
	}


	return 0;
}
