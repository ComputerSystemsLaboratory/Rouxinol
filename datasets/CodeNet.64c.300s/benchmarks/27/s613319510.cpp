#include <iostream>
using namespace std;


int main(){
	int n, x, t, c;
	while (cin >> n >> x && n | x != 0) {
		c = 0;
		for (int i = 1; i < n && 3 * i + 2 < x; i++) {
			for (int j = i + 1; j < n && i + 2 * j < x; j++) {
				if (x - i - j <= n) {
					c++;
				}
			}
		}
		cout << c << endl;
	}

	return 0;
}