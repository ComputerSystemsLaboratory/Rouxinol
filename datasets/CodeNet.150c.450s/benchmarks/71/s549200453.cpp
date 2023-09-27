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

int recur(int num, int dep) {
	int ret = 0;

	if (dep == 0) {
		if (num == 0) return 1;
		else return 0;
	}
	for (int i = 0; i < 10 && i <= num; i++) {
		ret += recur(num - i, dep - 1);
	}

	return ret;
}

int main() {
	n = -1;
	cin >> n;

	while (n != -1) {
		cout << recur(n, 4) << endl;
		
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