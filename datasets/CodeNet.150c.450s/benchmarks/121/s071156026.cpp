#include<iostream>
#include<vector>
#include<string>
#define H_size 100
#define W_size 100

using namespace std;

size_t num = 0;
char list[H_size][W_size];
size_t W, H;

void getNum(char(*a)[W_size], const char c, size_t i, size_t j) {
	if (i < 0 || j < 0 || i >= H || j >= W || a[i][j] !=c) {
		return;
	}
	if (a[i][j] == c)
	{
		a[i][j] = '.';
		getNum(a, c, i - 1, j);
		getNum(a, c, i, j + 1);
		getNum(a, c, i + 1, j);
		getNum(a, c, i, j - 1);
		return;
	}
}

int main() {

	while (true) {
		num = 0;
		cin >> H >> W;
		if (W == 0 && H == 0) {
			break;
		}
		else {
			for (size_t i = 0; i < H; ++i)
			{
				//cin.getline(list[i], W + 1);
				for (size_t j = 0; j < W; ++j) {
					cin >> list[i][j];
				}
			}
		}
		for (size_t i = 0; i < H; ++i) {
			for (size_t j = 0; j < W; ++j)
			{
				if (list[i][j] != '.') {
					getNum(list, list[i][j], i, j);
					num++;
				}
			}
		}
		cout << num << endl;

	}
	return 0;
}