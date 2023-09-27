#include<iostream>
#include<queue>

using namespace std;

bool flug[1000001];//false???????´???°

int main() {
	int a, b, n;
	for (int i = 2;i*i <= 1000000;i++) {
		if (!flug[i]) {
			for (int j = i * 2;j <= 1000000;j += i) {
				flug[j] = true;
			}
		}
	}
	while (cin >> a >> b >> n, a + b + n) {
		queue<int> que;
		flug[1] = true;
		for (int i = 1;i <= 1000000;i ++) {
			if (!flug[i]) {
				if (i - a >= 0) {
					if ((i - a) % b == 0) {
						que.push(i);
					}
				}
			}
		}
		for (int i = 0;i < n - 1;i++) {
			que.pop();
		}
		cout << que.front() << endl;
	}
	return 0;
}