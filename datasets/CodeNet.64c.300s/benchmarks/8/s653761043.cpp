#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cctype>
#include<cmath>
#include<string>
#include<set>
#include<map>
#include<queue>
#include<vector>
using namespace std;

void call(int n) {
	int i = 1;
	do {
		int x = i;
		bool END_CHECK_NUM = false;
		if (x % 3 == 0) {
			cout << " " << i;
			END_CHECK_NUM = true;
		}
		do {
			if (!END_CHECK_NUM && x % 10 == 3) {
				cout << " " << i;
				END_CHECK_NUM = true;
			}
			x /= 10;
		} while (!END_CHECK_NUM && x);
	} while (++i <= n);

	cout << endl;
}

int main() {
	int n;
	cin >> n;
	call(n);
	return 0;
}