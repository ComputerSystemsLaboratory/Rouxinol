#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <functional>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	int min = 0;
	int max = 0;
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	min = a[0];
	sort(a.rbegin(), a.rend());
	max = a[0];
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	cout << min << " " << max << " " << sum << endl;
}
