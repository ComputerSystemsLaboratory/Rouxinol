#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <functional>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
	while (true) {
		int n;
		cin >> n;
		if (n == 0) break;
		vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		sort(a.begin(), a.end());
		vector<int> b(n - 1);
		for (int i = 1; i < n; i++) {
			b[i - 1] = a[i] - a[i - 1];
		}
		sort(b.begin(), b.end());
		cout << b[0] << endl;
	}
}
