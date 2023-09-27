#include <iostream>
#include <string>
#include <stddef.h>
#include <stack>
#include <queue>
#include <cctype>
#include <stdio.h>
#include <cstdlib>
#include <algorithm>
#include <math.h>
#define ll long long;

using namespace std;


bool PrimeNumber(int p) {
	if (p == 2) return true;
	else if (p < 2 || p % 2 == 0) return false;

	int i = 3;
	while (i <= sqrt((double)p)) {
		if (p%i == 0) {
			return false;
		}
		i = i + 2;
	}
	return true;
}

int main() {
	int n;
	int a[10000];
	int count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		if (PrimeNumber(a[i])) count++;
	}
	cout << count << endl;
	
}