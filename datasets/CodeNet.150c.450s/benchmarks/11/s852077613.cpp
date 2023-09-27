#include<iostream>
using namespace std;

int read(char);
void write(int, int);

int main() {
	int n, b;
	int x[4][13] = {};
	char a;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		x[read(a)][b - 1] = 1;
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			if (x[i][j] == 0)	write(i, j);
		}
	}

	return 0;
}

int read(char c) {
	if		(c == 'S')	return 0;
	else if (c == 'H')	return 1;
	else if (c == 'C')	return 2;
	else if (c == 'D')	return 3;
}

void write(int i,int j) {
	if		(i == 0)	cout << 'S';
	else if (i == 1)	cout << 'H';
	else if (i == 2)	cout << 'C';
	else if (i == 3)	cout << 'D';

	cout << " " << j+1 << endl;
}