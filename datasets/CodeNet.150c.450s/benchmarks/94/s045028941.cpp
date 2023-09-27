#include "iostream"

using namespace std;

int main() {

	int num;
	int a[100];

	int snum = 0;

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> a[i];
	}

	int frag = 1;
	while (frag == 1) {
		frag = 0;
		for (int j = num - 1; j > 0; j--) {
			if (a[j] < a[j - 1]) {
				int b = a[j];
				a[j] = a[j - 1];
				a[j - 1] = b;

				snum++;

				frag = 1;
			}
		}
	}

	for (int i = 0; i < num; i++) {
		cout << a[i];
		if (i < num - 1) cout << " ";

	}
	cout << endl;
	cout << snum << endl;


	return 0;
}