#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	while (1) {
		int n, r;
		cin >> n >> r;
		if (n == 0) {
			break;
		}
		vector<int> dekki(n);
		for (int i = n; i >= 1; --i) {
			dekki[n - i] = i;
		}
		for (int i = 0; i < r; ++i) {
			int p, c;
			cin >> p >> c;
			vector<int> vec(p + c);
			for (int j = p - 1; j < p + c - 1; ++j) {
				vec[j - p + 1] = dekki[j];
			} 
			for (int j = 0; j < p - 1; ++j) {
				vec[c + j] = dekki[j];
			}

			for (int j = 0; j < p + c - 1; ++j) {
				dekki[j] = vec[j];
			}
		}

		cout << dekki[0] << endl;
	}

	return 0;
}
