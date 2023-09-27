#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <sstream>

using namespace std;
int main() {
	int n;
	cin >> n;
	vector<vector<vector<int> > > v(4, vector<vector<int> >(3, vector<int>(10)));
	for (int i = 0; i < n; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		v[a - 1][b - 1][c - 1] += d;
	}
	for (int i = 0; i < 4; i++) {
		if (i != 0) {
			for (int j = 0; j < 20; j++)cout << "#";
			cout << endl;
		}
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 10; k++) {
				cout << " " << v[i][j][k];
			}
			cout << endl;
		}
	}
	return 0;
}
