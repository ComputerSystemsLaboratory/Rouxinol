#include <iostream>
#include <vector>
using namespace std;

int main()
{
	bool flag;
	int sum, H;
	while (cin >> H, H) {
		sum = 0;
		vector< vector<int> > a(5, vector<int>(H, 0));
		for (int j = 0; j < H; j++) {
			for (int i = 0; i < 5; i++) {
				cin >> a[i][j];
				sum += a[i][j];
			}
		}

		do {
			flag = false;
			for (int j = H - 1; j >= 0; j--) {
				for (int i = 0; i < 3; i++) {
					if (a[i][j] != 0 && a[i][j] == a[i + 1][j] && a[i][j] == a[i + 2][j]) {
						if (i <= 1 && a[i][j] == a[i + 3][j]) {
							if (i == 0 && a[i][j] == a[i + 4][j]) {
								a[i + 4][j] = 0;
							}
							a[i + 3][j] = 0;
						}
						a[i][j] = a[i + 1][j] = a[i + 2][j] = 0;
						flag = true;
					}
				}
			}
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < H - 1; j++) {
					if (a[i][j + 1] == 0 && a[i][j] != 0) {
						a[i][j + 1] = a[i][j];
						a[i][j] = 0;
						j = -1;
					}
				}
			}
		} while (flag);

		for (int j = 0; j < H; j++)
			for (int i = 0; i < 5; i++)
				sum -= a[i][j];
		cout << sum << endl;
	}
	return 0;
}