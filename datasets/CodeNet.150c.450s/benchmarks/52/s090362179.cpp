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

stack<int> cars;

int main() {
	int input = -1;

	cin >> input;
	while (input != -1) {
		if (input > 0) {
			cars.push(input);
		} else {
			cout << cars.top() << endl;
			cars.pop();
		}

		input = -1;
		cin >> input;
	}

	return 0;
}

/*@@@@@@@@@@@@@@@@@@@@@@@@@*/
/*@                       @*/
/*@ debug output erased ? @*/
/*@                       @*/
/*@@@@@@@@@@@@@@@@@@@@@@@@@*/