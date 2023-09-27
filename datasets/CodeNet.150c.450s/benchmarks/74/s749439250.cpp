#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int ans[50001] = {};

int main() {
	int i, j, k, n, m, c;

	cin >> n >> m;
	for (i = 0; i < m; i++) {
		cin >> c;
		for (j = 0; j + c <= n; j++) {
			if(ans[j + c] == 0)ans[j + c] = ans[j] + 1;
			else ans[j + c] = min(ans[j + c], ans[j] + 1);
		}
	}

	cout << ans[n] << endl;





	return 0;
}