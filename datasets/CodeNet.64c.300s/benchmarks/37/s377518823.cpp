#include <iostream>

using namespace std;

int main() {
	int N;
	while ( cin >> N, N ) {
		int ans = 0;
		for (int k = 1; k <= N; ++k) {
			for (int l = 2; l < N; ++l) {
				int s = (k-1)*l + l*(l+1)/2;
				if (s == N) {
					++ans;
				}
				if (s >= N) {
					break;
				}
			}
		}
		cout << ans << endl;
	}
}