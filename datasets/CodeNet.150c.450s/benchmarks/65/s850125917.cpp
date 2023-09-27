#include "iostream"

using namespace std;

void sentaku(int a[100], char k[100][2], int num ) {

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

			char l = k[i][0];
			k[i][0] = k[minj][0];
			k[minj][0] = l;
			
			l = k[i][1];
			k[i][1] = k[minj][1];
			k[minj][1] = l;
		}
	}


	for (int i = 0; i < num; i++) {
		cout << k[i][0] << k[i][1];
		if (i < num - 1) cout << " ";

	}
	cout << endl;

}

void baburu(int a[100], char k[100][2], int num) {

	int frag = 1;
	while (frag == 1) {
		frag = 0;
		for (int j = num - 1; j > 0; j--) {
			if (a[j] < a[j - 1]) {
				int b = a[j];
				a[j] = a[j - 1];
				a[j - 1] = b;

				char l = k[j][0];
				k[j][0] = k[j-1][0];
				k[j-1][0] = l;

				l = k[j][1];
				k[j][1] = k[j-1][1];
				k[j-1][1] = l;

				frag = 1;
			}
		}
	}

	for (int i = 0; i < num; i++) {
		cout << k[i][0] << k[i][1];
		if (i < num - 1) cout << " ";

	}
	cout << endl;

}

int main() {

	int num;
	char ka[100][2], kb[100][2];
	int a[100], b[100];

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> ka[i];
		a[i] = ka[i][1] - '0';

		kb[i][0] = ka[i][0];
		kb[i][1] = ka[i][1];
		b[i] = a[i];
	}

	baburu(b, kb, num);
	cout << "Stable" << endl;
	sentaku(a, ka, num);
	
	int s = 0;

	for (int i = 0; i < num; i++) {
		if (ka[i][0] != kb[i][0]) {
			s = 1;
			cout << "Not stable" << endl;
			break;
		}
	}
	if (s == 0) cout << "Stable" << endl;

	return 0;
}