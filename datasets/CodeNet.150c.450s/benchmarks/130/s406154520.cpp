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
	int a, b;
	cin >> a >> b;
	vector<vector <int> > v(a, vector<int>(b));
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> v[i][j];
		}
	}
	vector<int>x(b);
	for (int i = 0; i < b; i++) {
		cin >> x[i];
	}
	for (int i = 0; i < a; i++) {
		long sum = 0;
		for (int j = 0; j < b; j++) {
			sum += v[i][j] * x[j];
		}
		cout << sum << endl;
	}
	return 0;
}
