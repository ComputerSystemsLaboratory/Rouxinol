#include<iostream>
#include<algorithm>
using namespace std;

#define MAX_N 1000000
int dp[MAX_N], N, a[MAX_N];

int main() {
	cin >> N; int cnt = 0;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
		if (cnt == 0) { dp[cnt] = a[i]; cnt++; }
		else {
			if (dp[cnt - 1] < a[i]) {
				dp[cnt] = a[i];
				cnt++;
			}
			else {
				int squirrel = lower_bound(dp, dp + cnt, a[i]) - dp;
				dp[squirrel] = a[i];
			}
		}
	}
	cout << cnt << endl;
	return 0;
}