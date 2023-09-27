#include <stdio.h>
#include <iostream>
using namespace std;

int main(void)
{
	int h;
	cin >> h;
	int *a = new int[h];
	for (int i = 0; i < h; i++) cin >> a[i];

	for (int i = 0; i < h; i++) {
		cout << "node " << i + 1 << ": ";
		cout << "key = " << a[i] << ", ";
		if (i != 0) {
			cout << "parent key = " << a[(i + 1) / 2 - 1] << ", ";
		}
		int j;
		if ((j = (i + 1) * 2 - 1) < h) {
			cout << "left key = " << a[j] << ", ";
			if (j + 1 < h) {
				cout << "right key = " << a[j + 1] << ", ";
			}
		}
		cout << endl;
	}

	return 0;
}