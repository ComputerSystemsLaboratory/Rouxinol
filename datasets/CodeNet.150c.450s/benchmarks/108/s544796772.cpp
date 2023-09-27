#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

int k[1000][1000], n, a, b, c, t, x[1000];
queue<int>Q;
queue<int>R;

int main() {
	memset(x, -1, sizeof(x));
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		for (int j = 0; j < b; j++) {
			cin >> c;
			k[i][c] = 1;
		}
	}
	Q.push(1);
	x[1] = 0;
	while (!Q.empty()) {
		t++;
		while (!Q.empty()) {
			for (int i = 1; i <= n; i++) {
				if (x[i] == -1 && k[Q.front()][i] == 1) {
					x[i] = t;
					R.push(i);
				}
			}
			Q.pop();
		}
		while (!R.empty()) {
			Q.push(R.front());
			R.pop();
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << i << ' ' << x[i] << endl;
	}
	return 0;
}