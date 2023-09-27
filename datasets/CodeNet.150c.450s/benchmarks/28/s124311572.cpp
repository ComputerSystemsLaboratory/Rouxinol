#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <stack>
#include <string>
#include <tuple>
#include <functional>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <map>
#include <random>
#include <cstdlib>
#define INT_MAX 2147483647
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#define Loop1(i, n) for(int i = 1; i < (int)n; i++)

using namespace std;
typedef long long int ll;

bool judge(int n, int k, int p, vector<int> a) {
	bool ret = true;
	int s = 1, t = 0;
	Loop(i, n) {
		if (t + a[i] > p) {
			s++;
			if (s > k) {
				ret = false;
				break;
			}
			t = 0;
		}
		t += a[i];
	}
	return ret;
}

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> w(n);
	int wmax = 0, sumw = 0;
	Loop(i, n) {
		cin >> w[i];
		if (w[i] > wmax) wmax = w[i];
		sumw += w[i];
	}
	int left = wmax, right = sumw;
	int p = (left + right) / 2;
	while (left < right) {
		if (judge(n,k,p,w)) right = p;
		else left = p + 1;
		p = (left + right) / 2;
	}
	cout << p << endl;
	return 0;
}