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

	for (int i = 0; i < num; i++) {
		int minj = i;
		int s = 0;
		for (int j = i; j < num; j++) {
			if (a[j] < a[minj]) {
				minj = j;
				s = 1;
			}
		}
		if (s == 1) {
			int b = a[i];
			a[i] = a[minj];
			a[minj] = b;
			snum++;
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