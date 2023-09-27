#include <cstdio>
#include <iostream>
using namespace std;
int counta;
void judge(char d[][20], int x, int y, int limitx, int limity) {
	if (d[y][x] == '@' || d[y][x] == '.') {
		d[y][x] = '#';
		counta++;
		if (x > 0) judge(d, x - 1, y, limitx, limity);
		if (x <= limitx - 2)judge(d, x + 1, y, limitx, limity);
		if (y>0)judge(d, x, y - 1, limitx, limity);
		if (y <= limity-2)judge(d, x, y + 1, limitx, limity);
	}
}

int main() {
	int x, y;
	int manx = 0;
	int many = 0;
	do {

		counta = 0;
		char a[20][20];
		for (int i = 0; i < 20; i++) {
			for (int j = 0; j < 20; j++)
				a[i][j] = '#';
		}
		cin >> x >> y;
		if (x == 0)break;
		for (int i = 0; i < y; i++) {
			for (int j = 0; j < x; j++) {
				cin >> a[i][j];
				if (a[i][j] == '@') { many = i; manx = j; }
			}
		}
		judge(a, manx, many, x, y);
		cout << counta << "\n";

	} while (1);
}