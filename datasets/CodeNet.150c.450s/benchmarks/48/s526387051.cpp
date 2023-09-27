#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int e, ans;

	while (1) {
		cin >> e;

		if (e == 0) break;
		ans = e;

		for (int i = 0; i * i * i <= e; i++) {
			for (int j = 0; j * j + i * i * i <= e; j++) {
				if (ans > i + j + (e - i * i * i - j * j)) ans = i + j + (e - i * i * i - j * j);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
