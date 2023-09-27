#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;

int ret[1000009];

void init() {
	for (int i = 1; i <= 200; i++) {
		for (int j = 1; j <= 200; j++) {
			for (int k = 1; k <= 200; k++) {
				int val = i * i + j * j + k * k + i * j + j * k + k * i;
				ret[val] += 1;
			}
		}
	}
}

int main() {
	init();
	int n; cin >> n;
	for (int i = 1; i <= n; i++) cout << ret[i] << endl;
	return 0;
}