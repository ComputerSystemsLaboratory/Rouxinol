#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {

	while(1) {
		int n; cin >> n;
		if (n == 0) break;
		int min = 1000000001;
		/*
		for (int x = 0; x <= n; x++) {
			if (x > n) break;
			for (int y = 0; y <= n; y++) {
				if (x + y * y > n) break;
				for (int z = 0; z <= n; z++) {
					int energy = x + y * y + z * z * z;
					int m = x + y + z;
					if (energy > n) break;
					if (energy == n and min > m) {
						min = m;
					}
				}
			}
		}
		*/
		for (int z = 0; z <= n; z++) {
			if (z * z * z > n) break;
			for (int y = 0; y <= n; y++) {
				int x = n - (z * z * z + y * y);
				int m = x + y + z;
				if (x < 0) break;
				if (min > m) {
					min = m;
				}
			}
		}
		cout << min << endl;
	}
	return 0;
}

