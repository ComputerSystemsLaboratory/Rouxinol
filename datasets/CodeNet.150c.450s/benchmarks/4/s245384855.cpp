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
		vector<int>x(3);
		for (int i = 0; i < 3; i++)cin >> x[i];
		if (x[0] == -1 && x[1] == -1 && x[2] == -1)break;
		int sum = x[0] + x[1];
		if (x[0] < 0 || x[1] < 0)cout << "F";
		else if (sum >= 80)cout << "A";
		else if (sum >= 65)cout << "B";
		else if (sum >= 50)cout << "C";
		else if (sum >= 30) {
			if (x[2] >= 50)cout << "C";
			else cout << "D";
		}
		else cout << "F";
		cout << endl;
	}
	return 0;
}
