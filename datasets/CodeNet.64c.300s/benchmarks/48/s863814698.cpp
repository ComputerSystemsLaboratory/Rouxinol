#include<iostream>
#include<cmath>
using namespace std;
#define N 1000001
bool prime[N];
int cnt[N];
int main() {
	for (int i = 0; i < N ; i++)prime[i] = true;
	int n = sqrt(N);
	prime[0] = prime[1] = false;
	for (int i = 2; i <= n; i++) {
		if (prime[i]) {
			for (int j = i + i; j <= N; j += i)prime[j] = false;
		}
	}
	cnt[0] = cnt[1] = 0;
	for (int i = 2; i < N; i++) {
		if (prime[i])cnt[i] = cnt[i - 1] + 1;
		else cnt[i] = cnt[i - 1];
	}
	int x;
	while (cin >> x) {
		cout << cnt[x] << endl;
	}
	return 0;
}