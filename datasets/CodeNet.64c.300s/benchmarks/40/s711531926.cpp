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
	string x;
	getline(cin, x);
	for (int i = 0; i < x.size(); i++) {
		if ('a' <= x[i] && x[i] <= 'z')cout << (char)(x[i] + ('A' - 'a'));
		else if ('A' <= x[i] && x[i] <= 'Z')cout << (char)(x[i] + ('a' - 'A'));
		else cout << x[i];
	}
	cout << endl;
	return 0;
}
