// class point	の練習（クラスの高度な実装）
#include <iostream>
#include <iomanip>
#include <cstring>
#define INF 1000001
typedef long long llong;
using namespace std;



int main() {
	int n;
	cin >> n;


	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0)cout << " " << i;
		else {
			int x = i;
			while (x > 0) {
				if (x % 10 == 3) {
					cout << " " << i;
					break;
				}
				else x /= 10;
			}

		}
	}


	cout << endl;


	return 0;
}

