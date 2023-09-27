#include <iostream>
using namespace std;

int main() {
	while(1) {
		int a, b;
		cin >> a >> b;
		if (a == 0 && b == 0)
		return 0;
		int krsw[17][17] = {};
		int cross[17][17] = {};
		int n;
		cin >> n;
		for(int i = 0; i < n; i++) {
			int x, y;
			cin >> x >> y;
			krsw[x][y] = 1;
		}
		for(int i = 1; i <= a; i++) {
			for(int j = 1; j <= b; j++) {
				if(krsw[i][j])
					continue;
				cross[i][j] = cross[i - 1][j] + cross[i][j - 1];
				if(i == 1 && j == 1)
					cross[1][1] = 1;
			}
		}
		cout << cross[a][b] << endl;
	}
	return 0;
}