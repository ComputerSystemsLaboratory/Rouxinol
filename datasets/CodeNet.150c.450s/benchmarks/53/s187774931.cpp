#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const int MAX = (int)1e9;
const int LIMIT = 31623;  //sqrt(1e9)
bool prime[LIMIT + 1];
int main() {
	int n;
	cin >> n;
	int tmp = n;
	vector<int> factr;
	fill(prime, prime + LIMIT + 1, 1);
	prime[0] = prime[1] = 0;
	for (int i = 2; i <= LIMIT; i++) {
		if (tmp < i) {
			break;
		}
		if (prime[i]) {
			while (tmp%i == 0) {
				tmp /= i;
				factr.push_back(i);
			}
			for (int k = 2; k*i <= LIMIT; k++) {
				prime[i*k] = 0;
			}
		}
	}
	if (factr.size() == 0) factr.push_back(n);
	cout << n << ":";
	for (int i = 0; i < factr.size(); i++) {
		cout << " " << factr[i];
	}
	cout << endl;
}