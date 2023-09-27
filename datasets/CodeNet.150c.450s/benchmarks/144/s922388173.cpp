#include <iostream>
#include <iomanip>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string.h>
#include <deque>
#define REP(i,j,n) for(int i=j;i<n;i++)
#define SORT(x) sort(x.begin(),x.end())

using namespace std;

int main() {
	int n, m, l;
	cin >> n >> m >> l;
	vector<vector<int>> v1(n, vector<int>(m));
	vector<vector<int>> v2(m, vector<int>(l));
	vector<vector<long>> ans(n, vector<long>(l));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cin >> v1[i][j];
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j <l ; j++)cin >> v2[i][j];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			long sum = 0;
			for (int k = 0; k < m; k++) {
				sum += v1[i][k] * v2[k][j];
			}
			ans[i][j] = sum;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			if (j != l - 1) cout << ans[i][j] << " ";
			else cout << ans[i][j] << endl;
		}
	}
	return 0;
}