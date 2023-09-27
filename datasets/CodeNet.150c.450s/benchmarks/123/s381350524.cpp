#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <string>
#include <tuple>
#include <functional>
#include <numeric>
#include <cmath>
#include <iomanip>
//#include "toollib.h"
#pragma warning (disable:4018)
using namespace std;

bool judge_prime_numbers(int n) {
	if (n == 1) return false;
	if (n == 2) return true;
	else if (n % 2 == 0) return false;
	else {
		bool judge = true;
		for (int i = 3; i <= sqrt(n); i = i + 2) {
			if (n%i == 0) {
				judge = false;
				break;
			}
		}
		return judge;
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> ary(n);
	for (int i = 0; i < n; i++) cin >> ary[i];
	int ret = 0;
	for (int i = 0; i < n; i++) {
		if (judge_prime_numbers(ary[i])) ret++;
	}
	cout << ret << endl;
	return 0;
}