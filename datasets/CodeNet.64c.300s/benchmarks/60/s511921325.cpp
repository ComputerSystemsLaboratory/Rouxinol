#include<iostream>
using namespace std;
int main() {
	int a, b;
	while (1) {
		cin >> a >> b;
		if (a == 0) {
			break;
		}
		int n;
		cin >> n;

		int r[17][17] = {0};
		for (int i = 0; i < n; i++) {
			int x, y;
			cin >> x >> y;
			r[x][y] = -1;
		}
		r[1][1] = 1;
		for (int y = 1; y <= b; y++) {
			for (int x= 1; x<= a; x++) {
				if (!((x == 1) && (y == 1))) {
					if (!(r[x][y] == -1)) {
						r[x][y] = r[x - 1][y] + r[x][y-1];
					}
					else {
						r[x][y] = 0;
					}
				}
			}
		}
		cout << r[a][b] << endl;
	}
	
	return 0;
}