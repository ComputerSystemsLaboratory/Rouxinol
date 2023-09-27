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
#include <map>
//#include "toollib.h"
#pragma warning (disable:4018)
#define INT_MAX 2147483647

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

void make_new_prime_numbers(vector<int>* ary) {
	int n = (*ary).back() + 2;
	while (true) {
		bool judge = true;
		for (int i = 1; i < (*ary).size(); i++) {
			if (n < pow((*ary)[i], 2)) break;
			if (n % (*ary)[i] == 0) {
				judge = false;
				break;
			}
		}
		if (judge) break;
		n += 2;
	}
	(*ary).push_back(n);
}

int main() {
	int n;
	cin >> n;
	cout << n << ":";
	vector<int> ret;
	vector<int> prime_numbers{ 2,3 };
	while (n % 2 == 0) {
		n /= 2;
		ret.push_back(2);
	}
	if (n != 1) {
		while (!judge_prime_numbers(n)) {
			if (n%prime_numbers.back() == 0) {
				n /= prime_numbers.back();
				ret.push_back(prime_numbers.back());
			}
			else make_new_prime_numbers(&prime_numbers);
		}
		ret.push_back(n);
	}
	for (int i = 0; i < ret.size(); i++) cout << " " << ret[i];
	cout << endl;
}