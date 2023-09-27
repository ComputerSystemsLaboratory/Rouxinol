#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> cnt(30);
	for (int i = 0; i < 28; i++) {
		int tmp;
		cin >> tmp;
		cnt[tmp - 1]++;
	}
	for (int i = 0; i < 30; i++) {
		if (cnt[i] == 0) {
			cout << i + 1 << endl;
		}
	}
	return 0;
}

