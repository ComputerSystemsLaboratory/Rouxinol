#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int tmp;
	int tmp2;
	int cnt = 0;
	cin >> tmp;
	int ar1[tmp];
	for (int i = 0; i < tmp; i++)
		cin >> ar1[i];

	cin >> tmp2;
	int ar2[tmp2];
	for (int i = 0; i < tmp2; i++)
		cin >> ar2[i];

	for (int i = 0; i < tmp2; i++) {
		for (int j = 0; j < tmp; j++) {
			if (ar2[i] == ar1[j]) {
				cnt++;
				break;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}