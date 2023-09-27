#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>

using namespace std;

/*
解法
最初のk個の和→acumurate
その後の値の求め方は、今の和の値のもとになる値を配列に保管。
新たに値を求めるたびに、一番古い値を上書きしていく。
和から一番古い値を減じ、新たな値を加算する。

*/

int main() {
	int n, k;
	while (true) {
		
		int sum;
		int sum_max;
		cin >> n >> k;
		if (0 == n && 0 == k) {
			break;
		}

		vector<int> temp(k);

		for (int& a : temp) {
			cin >> a;
		}
		sum_max = sum = accumulate(temp.begin(), temp.end(), 0);
		auto it = temp.begin();
		for (int i = k; i < n; ++i) {
			int ai;
			cin >> ai;
			sum -= *it;
			sum += ai;
			*it = ai;
			if (++it == temp.end()) {
				it = temp.begin();
			}
			sum_max = max(sum, sum_max);
		}
		cout << sum_max << endl;
	}
	return 0;
}