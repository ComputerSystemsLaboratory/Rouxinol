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
	while (true) {
		string x;
		cin >> x;
		if (x == "0")break;
		int sum = 0;
		for (int i = 0; i < x.size(); i++) {
			sum += x[i] - '0';
		}
		cout << sum << endl;
	}
	return 0;
}
