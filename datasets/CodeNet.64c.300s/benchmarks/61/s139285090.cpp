#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
	unsigned int r, c;
	unsigned int a[101];
	unsigned int s[101];

	cin >> r >> c;
	for (unsigned int j = 0; j <= c; ++j) {
		s[j] = 0;
	}

	for (unsigned int i = 0; i < r; ++i) {
		a[c] = 0;
		for (unsigned int j = 0; j < c; ++j) {
			cin >> a[j];
			a[c] += a[j];
			s[j] += a[j];
		}
		for (unsigned int j = 0; j < c; ++j) {
			cout << a[j] << " ";
		}
		cout << a[c] << endl;
	}
	for (unsigned int j = 0; j < c; ++j) {
		s[c] += s[j];
		cout << s[j] << " ";
	}
	cout << s[c] << endl;
	return 0;
}

