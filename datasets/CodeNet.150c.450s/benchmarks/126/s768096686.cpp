#include <iostream>
#include <vector>

using namespace std;

vector< vector<int> > hyou(17, vector<int>(17, 0));

int count (int a, int b) {
	if (hyou[a][b] == 1 || a < 1 || b < 1) {
		return 0;
	} else if (a == 1 && b == 1) {
		return 1;
	} else {
		return count(a-1, b) + count(a, b-1);
	}
}

int main() {
	int a, b, n;
	int c, d;
	while (cin >> a >> b) {
		if (a == 0 && b == 0) {
			break;
		}
		for (int i = 0; i < 17; i++) {
			for (int j = 0; j < 17; j++) {
				hyou[i][j] = 0;
			}
		}
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> c >> d;
			hyou[c][d] = 1;
		}
		cout << count(a, b) << endl;
	}
	return 0;
}