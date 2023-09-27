#include <iostream>

using namespace std;

int main()
{
	int i, n;
	unsigned long fact = 1;

	cin >> n;

	for (i = 2; i <= n; i++) {
		fact *= i;
	}

	cout << fact << endl;

	return 0;
}