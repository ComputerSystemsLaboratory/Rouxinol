#include <iostream>
#include <climits>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	while( true ) {
		cin >> n;
		if(n == 0) {
			break;
		}

		vector<int> a(n), b(n), c(n);

		for(int i = 0; i < n; i++) {
			cin >> a[i] >> b[i] >> c[i];
		}

		vector< vector< int > > map(10, vector< int >(10, INT_MAX / 4));

		for(int i = 0; i < n; i++) {
			map[a[i]][b[i]] = c[i];
			map[b[i]][a[i]] = c[i];
		}
		for(int i = 0; i < 10; i++) {
			map[i][i] = 0;
		}

		for(int k = 0; k < 10; k++) {
			for(int i = 0; i < 10; i++) {
				for(int j = 0; j < 10; j++) {
					map[i][j] = min(map[i][j], map[i][k] + map[k][j]);
				}
			}
		}

		int total[10];

		for(int i = 0; i < 10; i++) {
			total[i] = 0;
		}

		int min_cost = INT_MAX / 2, town;

		for(int i = 0; i < 10; i++) {
			for(int j = 0; j < 10; j++) {
				if(map[i][j] >= INT_MAX / 4) {
					continue;
				}
				total[i] += map[i][j];
			}
		}

		for(int i = 0; i < 10; i++) {
			if(total[i] == 0) {
				continue;
			}
			if(min_cost > total[i]) {
				min_cost = total[i];
				town = i;
			}
		}

		cout << town << " " << total[town] << endl;
	}
}