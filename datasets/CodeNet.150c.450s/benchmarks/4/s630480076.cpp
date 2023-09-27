// class point	の練習（クラスの高度な実装）
#include <iostream>
#include <vector>
#include <algorithm>

typedef long long llong;
using namespace std;



int main() {
	int m, f, r;

	while (1) {
		cin >> m >> f >> r;
		if (m == -1 && f == -1 && r == -1)break;
		else if (m == -1 || f == -1)cout << 'F' << endl;
		else if (m + f >= 80)cout << 'A' << endl;
		else if (m + f >= 65)cout << 'B' << endl;
		else if (m + f >= 50)cout << 'C' << endl;
		else if (m + f >= 30) {
			if (r >= 50)cout << 'C' << endl;
			else cout << 'D' << endl;
		}
		else cout << 'F' << endl;
	}
	return 0;
}

