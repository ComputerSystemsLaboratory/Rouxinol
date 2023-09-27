#include <iostream>
using namespace std;

int bitnum(int n) {
	n = (n&0x55555555) + ((n>>1)&0x55555555);
	n = (n&0x33333333) + ((n>>2)&0x33333333);
	n = (n&0x0f0f0f0f) + ((n>>4)&0x0f0f0f0f);
	n = (n&0x00ff00ff) + ((n>>8)&0x00ff00ff);
	return (n&0x0000ffff) + ((n>>16)&0x0000ffff);
}

int main() {
	int n, s;
	while (cin >> n >> s, n||s) {
		int num = 0;
		for (int i = 0; i < 1<<10; i++) {
			if (bitnum(i) != n) continue;
			int sum = 0;
			for (int j = 0; j < 10; j++)
				if ((i>>j) & 1)
					sum += j;
			if (sum == s)
				num++;
		}
		cout << num << endl;
	}
	return 0;
}