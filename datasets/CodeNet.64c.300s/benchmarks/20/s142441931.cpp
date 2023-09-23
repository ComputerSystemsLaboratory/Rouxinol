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

int d;
int sum;

int main() {
	d = -1;
	cin >> d;
	while (d != -1) {
		sum = 0;
		
		for (int x = d; x < 600; x += d) {
			sum += d * (x * x);
		}

		cout << sum << endl;
		
		d = -1;
		cin >> d;
	}

	return 0;
}

/*@@@@@@@@@@@@@@@@@@@@@@@@@*/
/*@                       @*/
/*@ debug output erased ? @*/
/*@                       @*/
/*@@@@@@@@@@@@@@@@@@@@@@@@@*/