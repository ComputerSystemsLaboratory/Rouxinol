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
bool prime[1000000];

int main() {

	for (int i = 2; i <= 1000000; i++) prime[i] = true;

	for (int i = 2; i <= 1000000; i++) {
		if (!prime[i]) continue;
		for (int j = 2; i * j <= 1000000; j++) {
			prime[i * j] = false;
		}
	}

	n = -1;
	cin >> n;

	while (n != -1) {
		int cnt = 0;
		for (int i = 2; i <= n; i++) {
			if (prime[i]) cnt++;
		}
		cout << cnt << endl;

		n = -1;
		cin >> n;
	}

	return 0;
}

/*@@@@@@@@@@@@@@@@@@@@@@@@@*/
/*@                       @*/
/*@ debug output erased ? @*/
/*@                       @*/
/*@@@@@@@@@@@@@@@@@@@@@@@@@*/