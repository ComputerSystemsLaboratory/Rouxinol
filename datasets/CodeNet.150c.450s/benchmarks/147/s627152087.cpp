#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> F;

void input_init(void) {
	cin >> N;
	F.resize(N + 1, 0);
}

void solve(void) {
	for (int x = 1; x * x <= N; ++x) {
		for (int y = 1; y * y <= N; ++y) {
			for (int z = 1; z * z <= N; ++z) {
				int d = x * x + y * y + z * z + x * y + y * z + z * x;
				if (d <= N)
					++(F[d]);
			}
		}
	}
}

int main(void) {
	input_init();
	solve();
	for (int i = 1; i <= N; ++i)
		cout << F[i] << '\n';
	return 0;
}
