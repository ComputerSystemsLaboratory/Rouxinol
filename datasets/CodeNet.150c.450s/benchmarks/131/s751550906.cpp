#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int digit(int n, int d) {
	int m = (int)(n/pow(10,d)) * pow(10,d);
	return (n - m)/pow(10,d-1);
}

int max_deci(int n, int l) {
	int ret = 0;
	vector<int> d(l);

	for (int i = 0; i < l; i++) {
		d[i] = digit(n,i+1);
	}
	sort(d.begin(), d.end(), std::greater<int>());
	for (int i = 0; i < l; i++) {
		ret += d[i] * pow(10,l-i-1);
	}

	return ret;
}

int min_deci(int n, int l) {
	int ret = 0;
	vector<int> d(l);

	for (int i = 0; i < l; i++) {
		d[i] = digit(n,i+1);
	}
	sort(d.begin(), d.end());
	for (int i = 0; i < l; i++) {
		ret += d[i] * pow(10,l-i-1);
	}

	return ret;
}

int check_vec(vector<int> v, int n, int ind) {
	int ret = 0;
	for (vector<int>::iterator itr = v.begin(); itr != v.end() && ret < ind+1; ++itr) {
		if (*itr == n) {
			return ret;
		}
		ret++;
	}
	return -1;
}

int main(void) {
	int N,L;
	cin >> N;
	cin >> L;

	while (N!=0||L!=0) {
		bool find = false;
		int a = N;
		int ind;
		vector<int> dp(21,-1);
		dp[0] = a;
		for (int i = 0; i < 20 && !find; i++) {
			a = max_deci(a,L) - min_deci(a,L);
			ind = check_vec(dp,a,i);
			if (!(ind < 0)) {
				find = true;
				cout << ind << " " << a << " " << i-ind+1 << endl; 
			}
			else {
				dp[i+1] = a;
			}
		}

		cin >> N;
		cin >> L;
	}
	return 0;
}