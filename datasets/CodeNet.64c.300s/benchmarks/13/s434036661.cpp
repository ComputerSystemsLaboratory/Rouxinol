#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	long a[50] = { 1, 1 };

	cin >> n;

	if (n > 1) {
		for (int i = 2; i <= n; i++)
			a[i] = a[i - 1] + a[i - 2];
	}

	cout << a[n] << endl;

	return 0;
}
