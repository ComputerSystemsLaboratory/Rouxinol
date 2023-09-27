#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end());
	long sum = 0;
	for (int i = 0; i < n; i++)sum += a[i];
	cout << a[0] << " " << a[n - 1] << " " << sum << endl;
	return 0;
}
