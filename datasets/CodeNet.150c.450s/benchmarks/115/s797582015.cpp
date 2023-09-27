#include <string>
#include <iostream>
using namespace std;

int n;
string x, y;
bool mat[1000][1000];
int a[1000][1000];

int max(int i, int j) {
	int r = (!mat[i - 1][j] ? a[i - 1][j] : 0);
	r = ((!mat[i][j - 1] && a[i][j - 1] > r) ? a[i][j - 1] : r);
	return r > a[i - 1][j - 1] ? r : a[i - 1][j - 1];
}

int main(){
	cin >> n;
	for (int ia = 0; ia < n; ia++) {
		int ans = 0;
		cin >> x >> y;
		for (int i = 0; i < x.length(); i++) {
			for (int j = 0; j < y.length(); j++) {
				if (x[i] == y[j]) {
					mat[i][j] = true;
				}
				else {
					mat[i][j] = false;
				}
			}
		}
		for (int i = 0; i < x.length(); i++) {
			a[i][0] = mat[i][0] ? 1 : 0;
		}
		for (int i = 1; i < y.length(); i++) {
			a[0][i] = mat[0][i] ? 1 : 0;
		}
		for (int i = 1; i < x.length(); i++) {
			for (int j = 1; j < y.length(); j++) {
				a[i][j] = max(i, j) + (mat[i][j] ? 1 : 0);
			}
		}
		int p = 0;
		for (int i = 0; i < x.length(); i++) {
			p = a[i][y.length() - 1] > p ? a[i][y.length() - 1] : p;
		}
		for (int i = 0; i < y.length() - 1; i++) {
			p = a[x.length() - 1][i] > p ? a[x.length() - 1][i] : p;
		}
		cout << p << endl;
	}


	return 0;
}