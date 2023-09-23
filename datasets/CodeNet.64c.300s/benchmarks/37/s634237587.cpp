#include<iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n, n) {
		int sum = 3, ans = 0;
		for (int l = 1, r = 2;;) {
			while (r < n/2+1 && sum < n) {
				sum += ++r;
			}
			if (sum < n)break;
			else if (l != r && sum == n)ans++;
			sum -= l++;
		}
		cout << ans << endl;
	}
}