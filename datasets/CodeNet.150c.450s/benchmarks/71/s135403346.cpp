#include <iostream>
#include <vector>
using namespace std;

int countNum(int num) {
	int n = 0;
	for (int a = 0; a < 10 && a <= num ; a++) {
		if (num - a > 27)
			continue;
		for (int b = 0; b < 10 && b + a <= num ; b++) {
			if (num - b - a > 18)
				continue;
			for (int c = 0; c < 10 && c + b + a <= num ; c++) {
				if (num - b - a - c > 9)
					continue;
				n++;
			}
		}
	}
	return n;
}

int main() {
	int n = 0;
	vector<int> dst;
	while (cin >> n) {
		dst.push_back(countNum(n));
	}
	for (vector<int>::iterator it = dst.begin(); it < dst.end(); it++)
		cout << *it << endl;
	return 0;
}
