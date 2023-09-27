#include "bits/stdc++.h"
using namespace std;

int main() {
	int n,r;
	while (cin >> n>>r) {
		if (!n)break;
		int a[50];
		int b[50];
		for (int i = 0; i < n; ++i)a[i] = n - i;
		for (int i = 0; i < r; ++i) {
			int s, e, j = 0;
			cin >> s>> e;
			for (; j < e; j++) b[j] = a[s + j - 1];
			for (; j < s + e - 1; j++)b[j] = a[j - e];
			for (; j < n; ++j)b[j] = a[j];
			for (j = 0; j < n; ++j)a[j] = b[j];
		}
		cout << a[0] << endl;
		
	}
	return 0;
}
