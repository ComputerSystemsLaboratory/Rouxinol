#include <iostream>
#include <iomanip>
#include <vector>
#include <set>
#include <string>
#include <queue>
#include <algorithm>
#include <map>
#include <cmath>
#include <list>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#define rep(i, n) for (int i = 0; i < n; i++)

using namespace std;

const int INF = 1 << 30;
const int MOD = 1000000007;
const int MAX = 100000;
const int N = 250;

int main() {
	int h; cin >> h;
	int k[N];
	rep(i, h) cin >> k[i];
	for (int i = 1; i <= h; i++) {
		cout << "node " << i << ": key = " << k[i-1] << ", ";
		if (i > 1) cout << "parent key = " << k[i/2-1] << ", ";
		if (2*i <= h) cout << "left key = " << k[2*i-1] << ", ";
		if (2*i+1 <= h) cout << "right key = " << k[2*i] << ", ";
		cout << endl;
	}
}

