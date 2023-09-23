#include <iostream>

using namespace std;

int main()
{
	int n, x;
	while (true) {
		cin >> n >> x;
		int count = 0;
		if (n == 0 && x == 0) break;
		int m = (n < x ? n : x);
		int sum_ij;
		for (int i = 1; i <= m - 2; i++) {
			for (int j = i + 1; j <= m - 1; j++) {
				sum_ij = i + j;
				for (int k = j + 1; k <= m; k++) {
					if (sum_ij + k == x) count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}