#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int m = 0, k = 0;
	unsigned long long n = 0, l = 1, l1 = 0;

	cin >> m >> n;

	while (n > 10000){
		k = (int)log2(n);
		l1 = m;

		for (int i = 0; i < k; i++)
			l1 = (l1 * l1) % 1000000007;

		n = n - (int)pow(2, k);
		l = (l * l1) % 1000000007;
	}

	for (int j = 0; j < n; j++) {
		l *= m;
		l = l % 1000000007;
	}

	cout << l << endl;

	return 0;
}