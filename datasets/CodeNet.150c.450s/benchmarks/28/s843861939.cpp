#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<list>
#include<string>
#include<cstring>
#include<cstdlib>
#include<cstdio>
//#include<cmath>
using namespace std;

int w[100010];

int f(int P, int n, int k)
{
	int sum = 0, p = P, i;
	for (i = 0; i < n;) {
		if (p >= w[i]) {
			p -= w[i];
			sum += w[i];
			i++;
		}
		else {
			k--;
			p = P;
		}
		if (k == 0)
			break;
	}
	return i;
}

int main(void)
{
	int n, k, ans = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> w[i];
	int left = 1, right = 1000000000, mid;
	mid = (left + right) / 2;
	while (right - left >= 50) {
		mid = (left + right) / 2;
		if (f(mid, n, k) >= n) {
			right = mid;
		}
		else {
			left = mid;
		}
	}
	for (int i = left; i <= right; i++) {
		if (f(i, n, k) >= n) {
			cout << i << endl;
			break;
		}
	}
	return 0;
}
