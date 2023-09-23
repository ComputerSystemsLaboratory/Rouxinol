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

int main() {
	cin >> n;

	int money = 100000;
	for (int i = 0; i < n; i++) {
		money *= 1.05;

		int simo = money % 1000;
		if (simo != 0) money += 1000 - simo;
	}

	cout << money << endl;

	return 0;
}

/*@@@@@@@@@@@@@@@@@@@@@@@@@*/
/*@                       @*/
/*@ debug output erased ? @*/
/*@                       @*/
/*@@@@@@@@@@@@@@@@@@@@@@@@@*/