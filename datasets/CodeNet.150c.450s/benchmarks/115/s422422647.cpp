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
		int ans = 0, p = 0;
		cin >> x >> y;
		for (int i = 0; i < x.length(); i++) {
			mat[i][0] = x[i] == y[0] ? true : false;
			a[i][0] = mat[i][0] ? 1 : 0;
		}
		for (int i = 1; i < y.length(); i++) {
			mat[0][i] = x[0] == y[i] ? true : false;
			a[0][i] = mat[0][i] ? 1 : 0;
		}
		for (int i = 1; i < x.length(); i++) {
			for (int j = 1; j < y.length(); j++) {
				mat[i][j] = x[i] == y[j] ? true : false;
				a[i][j] = max(i, j) + (mat[i][j] ? 1 : 0);
				if (a[i][j] > p) p = a[i][j];
			}
		}
		if (a[x.length() - 1][0] > p) p = a[x.length() - 1][0];
		if (a[0][y.length() - 1] > p) p = a[0][y.length() - 1];
		cout << p << endl;
	}


	return 0;
}