#include "iostream"
using namespace std;

int main() {
	int r, c, box = 0;
	int under[100] = { 0 };
	cin >> r >> c;
	int number[100][100];
	for (int i = 0; i < r;i++) {
		for (int j = 0; j < c;j++) {
			cin >> number[i][j];
		}
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << number[i][j] << " ";
			box += number[i][j];
			under[j] += number[i][j];
		}
		cout << box << endl;
		box = 0;
	}
	for (int i = 0; i < c;i++) {
		cout << under[i] << " ";
		box += under[i];
	}
	cout << box << endl;
}