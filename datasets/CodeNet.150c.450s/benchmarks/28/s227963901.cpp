#include<vector>
#include<iostream>
using namespace std;
typedef long long llong;
int check(llong P, vector<int>w, int k, int n) {
	int i = 0;
	for (int j = 0; j < k; j++) {
		llong s = 0;
		while (s + w[i] <= P) {
			s += w[i];
			i++;
			if (i == n)return n;
		}
	}
	return i;
}
llong solve(vector<int>w,int k,int n) {
	llong left = 0;
	llong right = 100000 * 10000;
	llong mid;
	while (left + 1 < right) {
		mid = (left + right) / 2;
		int x = check(mid,w,k,n);
		if (x >= n)right = mid;
		else left = mid ;
	}
	return right;
}
int main() {
	int n, k;
	cin >> n >> k;
	vector<int>w(n);
	for (int i = 0; i < n; i++)cin >> w[i];
	cout << solve(w, k, n) << endl;
	return 0;
}               