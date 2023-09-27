#include <iostream>
using namespace std;

int main(void) {
	int N, A, B, C, X, Y, count;

	cin.tie(0);

	while (cin >> N >> A >> B >> C >> X, N | A | B | C | X) {
		count = 0;

		for (int i = 0; i < N; i++) {
			cin >> Y;
			while (X != Y) {
				X = (A * X + B) % C;
				count++;
				if (count > 10000) break;
			}

			if (i != N - 1) {
			X = (A * X + B) % C;
			count++;
			}
		}
		if(count > 10000) count = -1;
		cout << count << endl;
	}
	return 0;
}