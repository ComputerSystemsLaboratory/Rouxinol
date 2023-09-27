#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <deque>
#include <tuple>
#include <queue>
#include <functional>
using namespace std;
const int INF = 1 << 30;
int main(){
	int n, k;
	while (cin >> n >> k, n) {
		vector<int> a(n);
		for (int &x : a)cin >> x;
		int pos = 0;
		int sum = 0;
		for (int i = 0; i < k; i++) {
			sum += a[i];
		}
		int max = sum;
		for (int i = 0; i < n - k; i++) {
			sum += a[i + k] - a[i];
			max = std::max(max, sum);
		}
		cout << max << endl;
	}
	return 0;
}