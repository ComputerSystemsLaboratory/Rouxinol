
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#define pi 3.14159265358979323846264338
using namespace std;

int main() {
	int n;
	cin >> n;
	int daigakudata[5][4][11] = {};
	int b, f, r, v;
	for (int i = 0; i < n; i++) {
		cin >> b >> f >> r >> v;
		daigakudata[b][f][r] += v;
	}
	for (int i = 1; i < 5; i++) {
		for (int j = 1; j < 4; j++) {
			for (int o = 1; o < 11; o++) {
				cout << " " << daigakudata[i][j][o];
			}
			cout << endl;
		}
		if (i != 4) {
			cout << "####################" << endl;
		}
	}
	return 0;
}