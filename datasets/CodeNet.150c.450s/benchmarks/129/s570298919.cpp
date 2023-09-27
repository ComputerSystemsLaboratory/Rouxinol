#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<vector>
#include<functional>
#include<stack>

using namespace std;

int main() {
	int a, b, t[101][101]{0};
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> t[i][j];
			t[a][j] += t[i][j];
			t[i][b] += t[i][j];
			t[a][b] += t[i][j];
		}
	}
	for (int i = 0; i < a+1; i++) {
		for (int j = 0; j < b+1; j++) {
			if (j == 0)cout << t[i][j];
			else cout << " " << t[i][j];
		}
		cout << endl;
	}
	return 0;
}