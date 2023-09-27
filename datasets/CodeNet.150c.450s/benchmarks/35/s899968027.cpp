#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;
int main() {
	long long n, a[5001], rui[5002] = { 0 }, ans[5002], cnt = 0;
	while (1) {
		cnt++;
		cin >> n;
		if (n == 0)break;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			rui[i+1] = rui[i] + a[i];
		}
		int max;
		max = -100001;
		for (int i = 0; i <= n; ++i) {
			for (int j = i+1; j <= n; ++j) {
				if (rui[j] - rui[i] > max) {
					max = rui[j] - rui[i];
				}
			}
		}
		ans[cnt] = max;
	}
	for (int i = 1; i < cnt; ++i) {
		cout << ans[i] << endl;
	}
	return 0;
}
