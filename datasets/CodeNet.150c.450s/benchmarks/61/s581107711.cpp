#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	while(1) {
		unsigned long int n, a, b, c, x;
		cin >> n >> a >> b >> c >> x;
		if (n == 0) break;
		int y[n];
		for (int i = 0; i < n; i++)
			cin >> y[i];
		int count = 0;
		int ran = x;
		// リール
		for (int i = 0; i < n; i++) {
			while (1) {
				if (ran == y[i]) {
					if ( (i+1) != n ) {
						ran = (a * ran + b) % c;
						count++;
					}
					break;
				}
				else {
					ran = (a * ran + b) % c;
					count++;
				}
				if (count > 10000)
					break;
			}
			if (count > 10000)
				break;
		}
		if (count > 10000)
			cout << "-1" <<endl;
		else
			cout << count <<endl;
	}
	return 0;
}

