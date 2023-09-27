#include<iostream>
#define LL long long
using namespace std;
int main() {
	LL sum, min, max, n, d;
	cin >> n;
	cin >> d;
	sum = d;
	min = d;
	max = d;
	n--;
	while (n--) {
		cin >> d;
		sum += d;
		if (min > d)min = d;
		if (max < d)max = d;
	}
	cout << min << ' ' << max << ' ' << sum << endl;
	return 0;
}