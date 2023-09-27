#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
#include <set>
#include <utility>

using namespace std;
int main() {
	vector<int> v(100,0);
	int n;
	while (cin >> n) {
		v[n - 1]++;
	}

	int max = 0;
	for (int i = 0; i < 100; i++) {
		if (max < v[i]) max = v[i];
	}

	for (int i = 0; i < 100; i++) {
		if (v[i] == max) cout << i + 1 << endl;
	}
	
	
	return 0;
}