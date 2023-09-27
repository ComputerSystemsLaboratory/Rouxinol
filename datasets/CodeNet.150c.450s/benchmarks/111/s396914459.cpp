#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
	int n;

	cin >> n;

	vector< int > num(n);
	vector< vector< long long int > > ans(n - 1, vector< long long int >(21, 0));

	for(int i = 0; i < n; i++) {
		cin >> num[i];
	}

	ans[0][num[0]]++;

	for(int i = 0; i < n - 2; i++) {
		for(int j = 0; j < 21; j++) {
			if(j + num[i + 1] <= 20) {
				ans[i + 1][j + num[i + 1]] += ans[i][j];
			}
			if(j - num[i + 1] >= 0) {
				ans[i + 1][j - num[i + 1]] += ans[i][j];
			}
		}
	}

	cout << ans[n - 2][num[n - 1]] << endl;
}