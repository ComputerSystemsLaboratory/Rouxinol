// aoj_test

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	const int MAX = 10000000000;

	int n;
	int max_benefit;
	int r1, r2;

	cin >> n;

	max_benefit = -MAX;
	r1 = MAX;

	while (n-- > 0) {
		cin >> r2;
		if (r1 == MAX) {
			r1 = r2;
		}
		else {
			max_benefit = max(max_benefit, r2 - r1);
			r1 = min(r1, r2);
		}
	}

	cout << max_benefit << endl;
}