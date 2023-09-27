#include<iostream>
#include<vector>
#include <unordered_map>  
#include <algorithm>
#include <functional>
#include <map>
#include <string>
#include <sstream>
#include <cmath>
#include <float.h>
using namespace std;



#define N 50000

void eratosthenes(bool prime[N]) {
	for (unsigned long long int i = 0; N > i; ++i) prime[i] = 1;
	prime[0] = prime[1] = 0;
	for (unsigned long long int i = 0; N > i; ++i) {
		if (prime[i]) {
			for (unsigned long long int j = i + i; j < N; j += i) {
				prime[j] = 0;
			}
		}
	}
}

bool is_prime(const unsigned n, vector<unsigned long long int> vec) {
	switch (n) {
	case 0: // fall-through
	case 1: return false;
	}

	// n > 2 が保証された

	for (auto i: vec) {
		if (i >= n) return true;
		if (n%i == 0) return false;
	}

	return true;
}


int main() {
	bool prime[N];
	eratosthenes(prime);
	vector<unsigned long long int> vec;
	for (unsigned long long int i = 0; i < N; ++i) {
		if (prime[i]) {
			vec.push_back(i);
		}
	}
	unsigned long long int n;
	cin >> n;
	cout << n << ": ";
	unsigned int pos = 0;
	while (!is_prime(n,vec)) {
		if (n % vec[pos] == 0) {
			n /= vec[pos];
			cout << vec[pos] << " ";
		}
		else {
			pos++;
		}
	}
	cout << n << endl;
	return 0;
}
