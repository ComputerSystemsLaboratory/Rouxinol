#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int a[n], i;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (i = n-1; i > -1; i--) {
		cout << a[i];
		if (i != 0) cout << " ";
	}
	cout << "\n";
	return 0;
}