#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	int n, a;
	vector<int> L;
	int l = 1;
	cin >> n;
	cin >> a;
	L.push_back(a);
	for (int i = 1; i < n; i++)
	{
		cin >> a;
		vector<int>::iterator pos = lower_bound(L.begin(), L.end(), a);
		if (pos == L.end()) {
			L.push_back(a);
			l++;
		}
		else {
			*pos = a;
		}
	}
	cout << l << endl;
}