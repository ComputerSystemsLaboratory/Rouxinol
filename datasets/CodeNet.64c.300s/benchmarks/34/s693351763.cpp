#include "iostream"

using namespace std;

int main() {

	int a[100];
	int cnum;
	int num;

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> a[i];
	}

	for (int i = 1; i < num; i++) {

		for (int j = 0; j < num; j++) {
			cout << a[j];
			if (j < num - 1) {
				cout << " ";
			}
		}
		cout << endl;

		int v = a[i];
		int j = i - 1;

		while (j >= 0 && a[j] > v) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = v;

	}

	for (int j = 0; j < num; j++) {
		cout << a[j];
		if (j < num - 1) {
			cout << " ";
		}
	}
	cout << endl;


	return 0;
}