#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

bool loading(int n, int k, int w[],long long maxAmount) {
	int cnt = 1;
	long long amount = 0;
	for (int i = 0; i < n; i++) {
		if (w[i] > maxAmount)return false;
		if (amount + w[i] <= maxAmount) {
			amount += w[i];
		}
		else {
			cnt++;
			amount = w[i];
		}
		if (k < cnt)return false;
	}
	return true;
}

int main() {
	int n;
	int k;
	int w[100000];
	long long min, max, mid;

	long long maxAmount = 1000000000;

	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> w[i];
	}
	
	min = 0;
	max = maxAmount;
	while (min < max) {
		mid = (min + max) / 2;
		if (loading(n, k, w, mid)) {
			maxAmount = mid;
			max = mid;
		}
		else {
			min = mid + 1;
		}
	}

	cout << maxAmount << endl;
	return 0;
}