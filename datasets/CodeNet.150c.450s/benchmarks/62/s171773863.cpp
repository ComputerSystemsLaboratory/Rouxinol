#include <iostream>
using namespace std;
int main() {
	int a[3];
	int tmp;

	cin >> a[0] >> a[1] >> a[2];

	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (a[i] > a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	cout << a[0] << " " << a[1] << " " << a[2] << "\n";

	return 0;
}