#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	while (true) {
		int m, nmin, nmax;
		cin >> m >> nmin >> nmax;

		if (m == 0 && nmin == 0 && nmax == 0) {
			break;
		}

		vector<int> P;

		for (int i = 0; i < m; i++) {
			int temp;
			cin >> temp;
			P.push_back(temp);
		}

		sort(P.begin(), P.end());

		int gap = 0;
		int num;

		for (int i = nmin; i <= nmax; i++) {
			if (P[m - i] - P[m - 1 - i] >= gap) {
				gap = P[m - i] - P[m - 1 - i];
				num = i;
			}
		}

		cout << num << endl;
	}

	return 0;
}