#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <set>
#include <queue>
#include <stack>
using namespace std;
typedef vector<int> vi;
typedef vector< vi > vvi;
int a[6];
int main() {
	int L,N=0,M=0;
	while (cin >> N) {
		L = 1000 - N;
		if (N == 0) {
			break;
		}
		if (L >= 500) {
			a[0]++;
			L = L - 500;
		}
		while (L >= 100) {
			a[1]++;
			L = L - 100;
		}
		while (L >= 50) {
			a[2]++;
			L = L - 50;
		}
		while (L >= 10) {
			a[3]++;
			L = L - 10;
		}
		while (L >= 5) {
			a[4]++;
			L = L - 5;
		}
		a[5] = L;
		M = a[0] + a[1] + a[2] + a[3] + a[4] + a[5];
		cout << M << endl;
		M = 0;
		for (int i = 0; i < 6; i++) {
			a[i] = 0;
		}
	}
}