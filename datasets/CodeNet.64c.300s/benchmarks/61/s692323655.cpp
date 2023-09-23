#include <iostream>
using namespace std;
int main() {
#define TABLE_SIZE ((row + 1) * (col + 1))
#define CURRENT_INDEX (i * (col + 1) + j)
#define R_TOTAL_INDEX (i * (col+1) + col)
#define C_TOTAL_INDEX (row * (col + 1) + j)
#define TOTAL_INDEX (TABLE_SIZE - 1)
	int row, col, size, num;
	cin >> row >> col;
	int* table = new int[TABLE_SIZE];
	for (int i = 0; i < TABLE_SIZE; i++) {
		table[i] = 0;
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> num;
			table[CURRENT_INDEX] = num;
			table[R_TOTAL_INDEX] += num;
			table[C_TOTAL_INDEX] += num;
			table[TOTAL_INDEX] += num;
		}
	}
	for (int i = 0; i < row + 1; i++) {
		for (int j = 0; j < col + 1; j++) {
			cout << table[CURRENT_INDEX] << (j < col ? " ":"\n");
		}
	}
	delete[] table;
	return 0;
}