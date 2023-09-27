#include<iostream>
#include<algorithm>

using namespace std;

// 2つの値の和がaとなる順列の数。
int func2(int a) {
	if (a > 18) {
		return 0;
	}
	int count = 0;
	
	for (int i = 0; i <= min(a, 9); ++i) {
		if (a - i < 10) {
			++count;
		}
	}
	return count;
}

// 3つの値の和がaとなる順列の数
int func3(int a) {
	if (a > 27) {
		return 0;
	}
	int count = 0;

	for (int i = 0; i <= min(a, 9); ++i) {
		count += func2(a - i);
	}
	return count;
}

// 4つの値の和がaとなる順列の数
int func4(int a) {
	if (a > 36) {
		return 0;
	}
	int count = 0;
	for (int i = 0; i <= min(a, 9); ++i) {
		count += func3(a - i);
	}
	return count;
}

int main() {
	int n;

	while (cin >> n) {
		cout << func4(n) << endl;
	}
	return 0;
}