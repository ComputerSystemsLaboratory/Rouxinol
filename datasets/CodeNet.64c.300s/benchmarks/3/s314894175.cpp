#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <math.h>

using namespace std;

typedef long long ll;

int main() {
	int v[100];
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	for (int i = n-1; i >= 0; --i) {
		if (i != n-1) cout << " ";
		cout << v[i];
	}
	cout << endl;
}