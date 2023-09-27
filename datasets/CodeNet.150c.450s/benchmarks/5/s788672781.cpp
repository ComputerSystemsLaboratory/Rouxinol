#include <iostream>
using namespace std;

int main()
{
	int n;
	int i;
	int temp;

	cin >> n;

	int* p = new int[n];

	for (i = 0; i < n; i++) {
		cin >> p[i];
	}

	for (i = 0; i <= n / 2 - 1; i++) {
		temp = p[i];
		p[i] = p[n - 1 - i];
		p[n - 1 - i] = temp;
	}

	for (i = 0; i < n; i++) {
		if (i < n - 1) {
			cout << p[i] << " ";
		} else {
			cout << p[i] << endl;
		}
	}

	delete [] p;

	return 0;
}