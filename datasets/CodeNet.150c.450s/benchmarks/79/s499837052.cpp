#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, r, p, c;
	while (cin >> n >> r, n || r) {
		vector<int> vec(n + 1),sw(n + 1);
		for (int i = 0; i < n; i++) {
			vec[i + 1] = n - i;
		}
		for (int i = 0; i < r; i++) {
			cin >> p >> c;
			for (int j = 1; j < p; j++) {
				sw[j] = vec[j];
			}
			for (int j = 0; j < c; j++) {
				vec[j + 1] = vec[p + j];
			}
			for (int j = 1; j < p; j++) {
				vec[j + c] = sw[j];
			}
		}
		cout << vec[1] << endl;
	}
	return 0;
}