#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;
int main() {
	while (true) {
		int a, b; string s;
		cin >> a >> s >> b;
		if (s == "?")break;
		if (s == "+")cout << a + b << endl;
		if (s == "-")cout << a - b << endl;
		if (s == "*")cout << a * b << endl;
		if (s == "/")cout << a / b << endl;
	}
	return 0;
}
