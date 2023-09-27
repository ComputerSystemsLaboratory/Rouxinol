#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <sstream>

using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	reverse(a.begin(), a.end());
	for (int i = 0; i < n; i++)
	{
		if (i != 0)cout << " ";
		cout << a[i];
	}
	cout << endl;
	return 0;
}
