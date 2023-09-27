#include <iostream>
using namespace std;

int main()
{
	int N, A, B, C, X, buf;
	while (cin >> N >> A >> B >> C >> X, N || A || B || C || X) {
		int cnt = 0;
		bool flag = true;
		for (int i = 0; i < N; i++) {
			cin >> buf;
			if (flag) {
				while (X != buf) {
					X = (A * X + B) % C;
					cnt++;
					if (cnt >= 10001) {
						flag = false;
						break;
					}
				}
			}
			X = (A * X + B) % C;
			cnt++;
		}
		if (flag)
			cout << cnt - 1 << endl;
		else
			cout << -1 << endl;
	}
	return 0;
}