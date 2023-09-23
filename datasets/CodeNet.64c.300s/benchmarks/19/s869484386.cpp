#include<iostream>
#include<algorithm>
using namespace std;
int n, a[500000], maxn, sum;
int main() {
	while (true) {
		cin >> n; maxn = -1000000000;
		if (n == 0) { break; }
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			sum = 0;
			for (int j = i; j < n; j++) {
				sum += a[j];
				maxn = max(sum, maxn);
			}
		}
		cout << maxn << endl;
	}
}