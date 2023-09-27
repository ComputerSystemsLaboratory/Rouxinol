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
	string s, p;
	cin >> s >> p;
	s = s + s;
	bool ret = false;
	for (int i = 0; i <= s.size() - p.size(); i++) {
		bool flag = true;
		for (int j = 0; j < p.size(); j++) {
			if (s[i + j] != p[j])flag = false;
		}
		if (flag)ret = true;
	}
	if (ret)cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
