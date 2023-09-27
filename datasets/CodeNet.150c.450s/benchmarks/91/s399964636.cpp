#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
const ld eps = 1e-9;

vector<int>primes;
void hurui(const int amax) {
	static bool flag = false;
	if (flag)return;
	vector<int>sos;
	sos = vector<int>(amax + 1, true);
	sos[0] = false; sos[1] = false;
	for (int i = 2; i <= amax; ++i) {
		if (sos[i]) {
			for (int j = 2 * i; j <= amax; j += i)sos[j] = false;
		}
	}
	for (int i = 0; i <= amax; ++i) {
		if (sos[i]) {
			primes.push_back(i);
		}
	}
	flag = true;
}

int main() {
	hurui(1e6 + 5);
	int num;
	while (cin >> num) {
		auto it = upper_bound(primes.begin(), primes.end(),num);
		cout << it - primes.begin() << endl;
	}
	return 0;
}