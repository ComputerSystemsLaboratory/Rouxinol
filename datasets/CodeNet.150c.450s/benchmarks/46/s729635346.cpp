#include<iostream>
using namespace std;
int main()
{
	int n, x;
	while (cin >> n >> x, !(n == 0 && x == 0)) {
		int counter = 0;
		for (int i = 1; i <= n - 1; i++) {
			for (int j = i + 1; j <= n; j++) {
				int k = x - i - j;
				if (k >= 1 && k <= n && k > i && k > j) {
					//cout << i << " " << j << " " << k << " " << i + j + k << endl;
					counter++;
				}
			}
		}
		cout << counter << endl;
	}
	return 0;
}