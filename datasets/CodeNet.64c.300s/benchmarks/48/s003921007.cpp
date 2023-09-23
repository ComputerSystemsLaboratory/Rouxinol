#include <iostream>
#include <queue>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;

#define max 1000000

int main(){
	bool is_prime[max] = {};
	for (int i = 2; i < max; ++i) {
		is_prime[i] = 1;
	}
	for (int i = 0; i < max; ++i) {
		if (is_prime[i]) {
			for (int j = i + i; j < max; j += i) {
				is_prime[j] = 0;
			}
		}
	}
	int num_prime[max] = {};
	for (int i = 1; i < max; ++i) {
		num_prime[i] = num_prime[i-1] + is_prime[i];
	}
	int n;
	while (cin >> n) {
		cout << num_prime[n] << endl;
	}
	return 0;
}