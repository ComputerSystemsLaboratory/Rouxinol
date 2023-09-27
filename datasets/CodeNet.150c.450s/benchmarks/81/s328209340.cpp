#include <cstdio>
#include <iostream>
#include <map>
#include <queue>
#include <functional>
#include <complex>
#include <cmath>
#include <vector>
#include <climits>
#include <set>
using namespace std;

int main()
{	
	int n;
	int g[10][10];

	while (cin >> n, n) {
		
		set<int> pat;
		fill((int *)g, (int *)(g + 10), INT_MAX / 2);
		 
		for (int i = 0; i < n; i++) {
			int to, from, cost;
			cin >> to >> from >> cost;
			pat.insert(to);
			pat.insert(from);
			g[to][from] = cost;
			g[from][to] = cost;
		}
		
		int m = pat.size();
		
		for (int k = 0; k < m; k++) {
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < m; j++) {
					if (i == j) continue;
					g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
				}
			}
		}
		
		int r = INT_MAX, index;
		for (int i = 0; i < m; i++) {
			int sum = 0;
			for (int j = 0; j < m; j++) {
				if (i == j) continue;
				sum += g[i][j];
			}
			if (r > sum) {
				r = sum;
				index = i;
			}
		}
		
		cout << index << " " << r << endl;
	}
		
	return 0;
}