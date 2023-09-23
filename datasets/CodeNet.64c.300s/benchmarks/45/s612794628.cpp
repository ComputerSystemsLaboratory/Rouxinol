#include <iostream>
using namespace std;

int main()
{
	while (true) {
		int N, M, P;
		cin >> N >> M >> P;

		if (N == 0 && M == 0 && P == 0) {
			break;
		}

		int top;
		int sum = 0;

		for (int i = 1; i <= N; i++) {
			int temp;
			cin >> temp;

			sum += temp;

			if (M == i) {
				top = temp;
			}
		}

		int ans;

		if (top != 0) {
			ans = sum*(100 - P) / top;
		}
		else {
			ans = 0;
		}

		cout << ans << endl;
	}

	return 0;
}