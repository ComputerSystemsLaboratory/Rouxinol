#include <iostream>
#define MAX 1000000000;
using namespace std;

int main(void)
{
	int n, now = 0, flag[101] = {};
	long ans = 0, an[100][100], min[100];

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cin >> an[i][j];
		min[i] = MAX;
	}

	do {
		long key = MAX;
		long key_i;
		flag[now] = 1;
		flag[100] = 0;

		for (int i = 0; i < n; i++) {
			if (an[now][i] != -1 && an[now][i] < min[i] && flag[i] == 0)
				min[i] = an[now][i];
			if (flag[i] == 0 && min[i] < key) {
				key = min[i];
				key_i = i;
			}
			if (flag[i] == 1)
				flag[100]++;
		}

		now = key_i;
		ans += key;

	} while (flag[100] != n - 1);

	cout << ans << endl;

	return 0;
}