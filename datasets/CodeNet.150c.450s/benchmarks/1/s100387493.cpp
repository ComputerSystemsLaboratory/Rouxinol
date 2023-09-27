#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

const int MAX = 100000;

int search(long long dp[], long long num, int begin, int end) {
	if (begin == end - 1)return end;

	int mid = (begin + end) / 2;
	if (dp[mid] == num)return mid;

	if (dp[mid] > num) {
		return search(dp, num, begin, mid);
	}
	else {
		return search(dp, num, mid, end);
	}
}

int main() {
	int n;
	long long ary[MAX];
	long long dp[MAX] = { 0 };
	int len = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ary[i];
	}

	for (int i = 0; i < n; i++) {
		int j = search(dp, ary[i], 0, len + 1);
		if (j <= len) {
			dp[j] = ary[i];
		}
		else {
			dp[++len] = ary[i];
		}
	}

	cout << len << endl;

	return 0;
}