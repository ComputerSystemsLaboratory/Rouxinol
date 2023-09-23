#include <iostream>
using namespace std;

int array[100][100];		//??????
int linevec[100];			//???????????????
int ans;

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> array[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		cin >> linevec[i];
	}
	for (int i = 0; i < n; i++) {
		ans = 0;
		for (int j = 0; j < m; j++) {
			ans += array[i][j] * linevec[j];
		}
		cout << ans << endl;
	}
	return 0;
}