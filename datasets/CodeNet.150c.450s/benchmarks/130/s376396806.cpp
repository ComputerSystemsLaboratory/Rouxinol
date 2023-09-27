// class point	の練習（クラスの高度な実装）
#include <iostream>
#include <vector>
#include <algorithm>

typedef long long llong;
using namespace std;



int main() {
	int n, m;
	llong A[100][100];
	llong b[100];
	llong ans =  0 ;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < m; i++)cin >> b[i];

	for (int i = 0; i < n; i++) {
		ans = 0;
		for (int j = 0; j < m; j++)ans += A[i][j] * b[j];
		cout << ans << endl;
	}
	return 0;
}

