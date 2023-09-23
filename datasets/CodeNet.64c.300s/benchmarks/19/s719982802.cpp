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

int n, num[5010];

int mina(int a, int b) {
	if (a < b) return a;
	return b;
}

int main() {
	cin >> n;
	while (n != 0) {
		int sum = 0;
		int maxsum = 0;
		int minmax = -100001;
		for (int i = 0; i < n; i++) {
			cin >> num[i];
			sum += num[i];
			if (sum < 0) sum = 0;
			if (num[i] >= 0) minmax = 100000*5000+1;
			if (num[i] < 0 && num[i] > minmax) minmax = num[i];
			if (sum > maxsum) maxsum = sum;
		}
		cout << mina(maxsum, minmax) << endl;

		cin >> n;
	}

	return 0;
}

/*@@@@@@@@@@@@@@@@@@@@@@@@@*/
/*@                       @*/
/*@ debug output erased ? @*/
/*@                       @*/
/*@@@@@@@@@@@@@@@@@@@@@@@@@*/