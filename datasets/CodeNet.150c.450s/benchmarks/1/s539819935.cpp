#include <iostream> 
#include <cmath>
#include <climits>
#include <algorithm>

using namespace std;

int dp[100000]; // i????????§??????????????????



int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++) {
		dp[i] = INT_MAX;
		cin >> a[i];
	}



	for (int i = 0; i < n; i++) {
		int* p = upper_bound(dp,dp + i,a[i] - 1);
		*(p) = a[i];
	}

	int * b = upper_bound(dp,dp + n, INT_MAX - 1);

	cout << b - dp  << endl;



	return 0;
}