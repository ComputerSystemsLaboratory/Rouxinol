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
	for (int i = 1; i <= n; i++) {
		bool flag = i % 3 == 0;
		stringstream ss;
		ss << i;
		string s = ss.str();
		for (int j = 0; j < s.size(); j++) {
			if (s[j] == '3')flag = true;
		}
		if (flag)cout << " " << i;
	}
	cout << endl;
	return 0;
}
