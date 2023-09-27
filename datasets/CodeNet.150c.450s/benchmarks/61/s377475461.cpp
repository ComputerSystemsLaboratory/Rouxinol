#include<iostream>
using namespace std;

int main()
{
	int N, A, B, C, X;
	cin >> N >> A >> B >> C >> X;
	while (N+A+B+C+X!=0) {
		int y[10002];
		for (int i = 1; i <= N; i++) {
			cin >> y[i];
		}
		int i = 1, t=1;
		for (t=0; t <= 10000; t++) {
			if (y[i] == X) {
				i++;
			}
			if (i == N + 1) {
				cout << t << endl; break;
			}
			X = (A*X + B) % C;
		}
		if (t > 10000) {
			cout << -1 << endl;
		}
		cin >> N >> A >> B >> C >> X;
	}
    return 0;
}
