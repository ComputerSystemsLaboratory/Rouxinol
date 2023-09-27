#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int i, minv, n, maxp, tmp;
	cin >> n;
	cin >> minv >> tmp;
	maxp = tmp - minv;
	minv = min(minv, tmp);
	for (i = 0; i < n - 2; i++) {
		cin >> tmp;
		maxp = max(maxp, tmp - minv);
		minv = min(minv, tmp);
	}
	cout << maxp << endl;
	return 0;
}