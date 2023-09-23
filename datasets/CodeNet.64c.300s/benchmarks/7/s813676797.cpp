#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <math.h>

using namespace std;

typedef long long ll;

int main() {
	bool S[13] = {0}, H[13] = {0}, C[13] = {0}, D[13] = {0};
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		char c; cin >> c;
		int x; cin >> x;
		if (c == 'S') S[x-1] = true;
		if (c == 'H') H[x-1] = true;
		if (c == 'C') C[x-1] = true;
		if (c == 'D') D[x-1] = true;
	}
	for (int i = 0; i < 13; ++i) {
		if (!S[i]) cout << 'S' << " " << (i+1) << endl;
	}
	for (int i = 0; i < 13; ++i) {
		if (!H[i]) cout << 'H' << " " << (i+1) << endl;
	}
	for (int i = 0; i < 13; ++i) {
		if (!C[i]) cout << 'C' << " " << (i+1) << endl;
	}
	for (int i = 0; i < 13; ++i) {
		if (!D[i]) cout << 'D' << " " << (i+1) << endl;
	}
}