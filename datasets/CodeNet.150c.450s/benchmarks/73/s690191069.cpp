#include<iostream>
using namespace std;

#define MAX_N 3000000

long long bit[MAX_N], n, m, a, b, c;

long long sum1(int i) {
	long long sum = 0;
	while (i > 0) {
		sum += bit[i];
		i -= i&-i;
	}
	return sum;
}

void add(int i, int x) {
	while (i <= n) {
		bit[i] += x;
		i += i&-i;
	}
}

int main() {
	cin >> n >> m;
	for (int j = 0; j < m; j++) {
		cin >> a >> b >> c;
		if (a == 0) {
			add(b, c);
		}
		else {
			cout << sum1(c) - sum1(b - 1) << endl;
		}
	}
	return 0;
}