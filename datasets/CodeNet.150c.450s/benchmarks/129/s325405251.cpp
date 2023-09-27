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
	int n, m, sum = 0,allsum=0;
	cin >> n >> m;
	vector<vector<int>> v(n+1, vector<int>(m+1));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> v[i][j];
			sum += v[i][j];
		}
		v[i][m] = sum;//right
		allsum += sum;
		sum = 0;
	}
	v[n][m] = allsum;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			sum += v[j][i];
		}
		v[n][i] = sum;
		sum = 0;
	}

	for (int i = 0; i < n + 1; i++) {
		for (int j = 0; j < m + 1; j++) {
			if (j != m) cout << v[i][j] << " ";
			else cout << v[i][j] << endl;
		}
	}
	return 0;
}