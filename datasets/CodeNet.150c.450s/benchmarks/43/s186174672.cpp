#include<iostream>
using namespace std;

int main() {
	int score_a[] = { 0, 0, 0, 0, 0 };
	int score_b[] = { 0, 0, 0, 0, 0 };
	int cnt = 0;
	bool flg = true;
	
	while (flg) {
		int num;

		cin >> num;
		if ((cnt >= 5) || (num == 0)) {
			flg = false;
		}
		else {
			for (int i = 0; i < num; i++) {
				int a;
				int b;

				cin >> a >> b;
				if (a > b) {
					score_a[cnt] += a + b;
				}
				else if (b > a) {
					score_b[cnt] += a + b;
				}
				else {
					score_a[cnt] += a;
					score_b[cnt] += b;
				}
			}
			cnt++;
		}
	}
	for (int i = 0; i < cnt; i++) {
		cout << score_a[i] << " " << score_b[i] << endl;
	}

	//while (1);

	return 0;
}