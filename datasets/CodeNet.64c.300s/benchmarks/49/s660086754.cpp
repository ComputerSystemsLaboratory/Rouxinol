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

int main() {
	int a = -1;
	int b = -1;

	cin >> a >> b;

	while (a != -1) {
		for (int i = 1; i <= 7; i++) {
			if (a + b < pow(10, i)) {
				cout << i << endl;
				break;
			}
		}

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