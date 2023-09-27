#include<iostream>
#include<stack>
using namespace std;

stack<int> S;
int n, x[10000][10000], a, b, c, d, _time=1;
int y[10000][3];

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> b >> c;
		for (int j = 1; j <= c; j++) {
			cin >> d;
			x[i][d] = 1;
		}
	}
	for (int i = 1; i <= n; i++) {
		x[0][i] = 1;
	}
	S.push(0);
	while (!S.empty()) {
		a = S.top();
		for (int i = 1; i <= n; i++) {
			if (x[a][i] == 1 && y[i][0] == 0) {
				y[i][0] = 1;
				y[i][1] = _time;
				S.push(i);
				goto Exit;
			}
		}
		S.pop();
		y[a][2] = _time;
	Exit:;
		_time++;
	}
	for (int i = 1; i <= n; i++) {
		cout << i << ' ' << y[i][1] << ' ' << y[i][2] << endl;
	}
	return 0;
}