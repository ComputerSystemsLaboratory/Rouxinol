#include <iostream>
#include <algorithm>

using namespace std;

int n;
int usea[11];

int dfs(int num, int r_num, int l_num) {
	int res = 0;

	if (usea[num] > r_num) {
		if (num == 9)
			return 1;
		res = dfs(num + 1, usea[num], l_num);
		return res;
	}
	else if (usea[num] >l_num) {
		if (num == 9)
			return 1;
		res = dfs(num + 1, r_num, usea[num]);
		return res;
	}
	else {
		return 0;
	}
}


int main()
{
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> usea[j];
		}
		if (dfs(0, -1, -1)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}