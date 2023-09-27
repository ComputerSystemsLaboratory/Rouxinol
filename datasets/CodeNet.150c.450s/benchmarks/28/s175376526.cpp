#include<iostream>
using namespace std;

int n, k;
long long int T[100000];
long long sum;
long long l;

int check(long long p) {
	int m = 0;
	for (int i = 0; i < k; i++) {
		long long s = 0;
		while (s + T[m] <= p) {
			s += T[m];
			m++;
			if (m >= n) {
				return n;
			}
		}
	}
	return m;
}

int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> T[i];
		sum += T[i];
	}
	l = sum / k;
	while (check(l) != n) {
		l++;
	}
	cout << l << endl;
	return 0;
}