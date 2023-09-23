#include<iostream>
using namespace std;
#include<cstring>

int Data[300];

int main() {
	int n, x;

	while (cin >> n >> x && n != 0 || x != 0) {
		memset(Data, 0, sizeof(Data));
		for (int i = 1; i <= n - 2; ++i) {
			for (int i2 = i + 1; i2 <= n - 1; ++i2) {
				for (int i3 = i2 + 1; i3 <= n; ++i3) {
					Data[i + i2 + i3]++;
					if (i + i2 + i3 > x) {
						break;
					}
				}
			}
		}

		cout << Data[x] << endl;
	}
	return 0;
}