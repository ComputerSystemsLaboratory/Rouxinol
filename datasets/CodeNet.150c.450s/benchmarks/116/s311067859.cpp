#include<iostream>
using namespace std;
int n2[100001];
int main() {
	int n, k;
	int cnt = 0, cnt_max = -10001;
	while (1) {
		cin >> n >> k;
		if (n == 0 && k == 0)return 0;
		for (int i = 1; i <= n; i++) {
			cin >> n2[i];
		}
		for (int i = 1; i <= n - k + 1; i++) {
			cnt = n2[i];
			for (int j = 1; j < k; j++) {
				cnt += n2[i + j];
			}
			if (cnt_max < cnt) {
				cnt_max = cnt;
			}
		}
		cout << cnt_max << endl;
		cnt_max = 0;
	}
}