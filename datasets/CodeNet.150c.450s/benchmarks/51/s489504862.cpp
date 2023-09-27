#include "bits/stdc++.h"
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

int main() {
	vector<bool> vec(30); int temp;
	while (cin >> temp) { vec[temp - 1] = true; }
	rep(i, 30) if (!vec[i]) cout << i + 1 << endl;
	return 0;
}
