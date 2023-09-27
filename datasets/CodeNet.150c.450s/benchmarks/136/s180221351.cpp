#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int a, b;

int main() {
	int gcd, lcm;

	a = -1;
	cin >> a >> b;

	while (a != -1) {
		int cpyA = a;
		int cpyB = b;

		if (a < b) {
			int tmp = a;
			a = b;
			b = tmp;
		}
		while (a % b != 0) {
			int tmp = a;
			a = b;
			b = tmp % b;
		}

		gcd = b;

		lcm = cpyA / gcd * cpyB;
		
		cout << gcd << " " << lcm << endl;

		a = -1;
		cin >> a >> b;
	}

	return 0;
}

/*@@@@@@@@@@@@@@@@@@@@@@@@@*/
/*@                       @*/
/*@ debug output erased ? @*/
/*@                       @*/
/*@@@@@@@@@@@@@@@@@@@@@@@@@*/