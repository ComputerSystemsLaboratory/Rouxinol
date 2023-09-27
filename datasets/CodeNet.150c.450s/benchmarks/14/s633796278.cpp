#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
const int M = 100000;
const double pi = 3.141592653589;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0) {
			cout << " " << i;
		}
		else {
			int x = i;
			while ((x % 10) != 3 && x != 0) {
				x /= 10;
			}
			if (x != 0) {
				cout << " " << i;
			}
		}
	}
	cout << endl;

	return 0;
}