#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int y[10000000], n, maxv; vector<int>a;
int main() {
	while (cin >> n) {
		y[n]++;
	}
	for (int i = 0; i < 10000000; i++) {
		maxv = max(maxv, y[i]);
	}
	for (int i = 0; i < 10000000; i++) {
		if (y[i] == maxv) { cout << i << endl; }
	}
}