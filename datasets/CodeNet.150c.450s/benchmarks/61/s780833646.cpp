#include <iostream>
#include <vector>
using namespace std;

int main()
{
	while (true) {
		int N, A, B, C, X;

		cin >> N >> A >> B >> C >> X;

		if (N == 0 && A == 0 && B == 0 && C == 0 && X == 0) {
			break;
		}

		vector<int> frames;

		for (int i = 0; i < N; i++) {
			int temp;
			cin >> temp;
			frames.push_back(temp);
		}

		int ans = -1;
		int cur = 0;

		if (X == frames[cur]) {
			cur++;
			if (N == 1) {
				ans = 0;
			}
		}
		if (N != cur) {
			for (int i = 1; i <= 10000; i++) {
				X = (A*X + B) % C;

				if (X == frames[cur]) {
					cur++;
					if (cur == N) {
						ans = i;
						break;
					}
				}
			}
		}

		cout << ans << endl;
	}
}