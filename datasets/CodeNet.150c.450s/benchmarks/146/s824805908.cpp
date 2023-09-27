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

int n;
double x1,x2,x3,x4,ya1,y2,y3,y4;

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x1 >> ya1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		
		if (x1 > x2) {
			double tmp = x1;
			x1 = x2;
			x2 = tmp;
			tmp = ya1;
			ya1 = y2;
			y2 = tmp;
		}
		if (x3 > x4) {
			double tmp = x3;
			x3 = x4;
			x4 = tmp;
			tmp = y3;
			y3 = y4;
			y4 = tmp;
		}
		

		if (x1 == x2) {
			if (x3 == x4) cout << "YES" << endl;
			else cout << "NO" << endl;
		} else {
			if (x3 == x4) cout << "NO" << endl;
			else {
				if (abs((y2 - ya1) / (x2 - x1) - (y4 - y3) / (x4 - x3)) <= 0.00000000001)
					cout << "YES" << endl;
				else cout << "NO" << endl;
			}
		}
	}

	return 0;
}

/*@@@@@@@@@@@@@@@@@@@@@@@@@*/
/*@                       @*/
/*@ debug output erased ? @*/
/*@                       @*/
/*@@@@@@@@@@@@@@@@@@@@@@@@@*/