#include <iostream>
using namespace std;

int ball[1001][10];
//int end[2][10];

bool dfs(int i, int j, int left_max, int right_max) {
	if (j == 10) return true;
	
	if (left_max < ball[i][j]) return dfs(i, j + 1, ball[i][j], right_max);
	else if (right_max < ball[i][j]) return dfs(i, j + 1, left_max, ball[i][j]);
	
	return false;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i ++) {
		for (int j = 0; j < 10; j ++) {
			cin >> ball[i][j];
		}
		dfs(i, 0, 0, 0) ? cout << "YES" <<  endl : cout << "NO" << endl;
	}
	
	return 0;
}