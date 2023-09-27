#include<iostream>

using namespace std;

// 1?100までの整数データのみであるため、
// 配列に出現回数を記録してもっとも多いものを
// 出力する。

int main() {
	// データは1から100であるが、
	// インデックスでも1から100値をそのまま使用できるほうが
	// コードが煩雑にならないため、配列サイズを101にする。
	int a[101] = {};
	int n;
	while (cin >> n) {
		++a[n];
	}

	// 出現回数の最大値を求める。
	int max = 0;
	for (int i = 1; i <= 100; ++i) {
		if (max < a[i]) {
			max = a[i];
		}
	}

	// 出現回数が最大値と同じ値を出力する。
	for (int i = 1; i <= 100; ++i) {
		if (max == a[i]) {
			cout << i << endl;
		}
	}
	return 0;
}