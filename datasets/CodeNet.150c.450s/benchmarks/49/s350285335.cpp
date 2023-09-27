#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <list>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>

using namespace std;

int main()
{
	int n;
	int a[100];
	int ans;

	while (1) {
		cin >> n;
		if (n == 0) break;
		ans = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i]; 
		}
		sort(a, a + n);
		for (int i = 1; i < n - 1; i++) {
			ans += a[i];
		}
		ans /= n - 2;
		cout << ans << endl;
	}

	

	return (0);
}