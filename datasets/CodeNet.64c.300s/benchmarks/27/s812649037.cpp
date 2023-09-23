#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
typedef vector<int> vi;
typedef vector< vi > vvi;
int main() {
	int n, x, sum, count=0;
	while(cin >> n >> x){
		if (n == 0 && x == 0) {
			break;
		}
		else {
			for (int i = 1; i <= n; i++) {
				for (int j = 1; j <= n; j++) {
					if (j > i) {
						for (int k = 1; k <= n; k++) {
							if (k > j) {
								sum = i + j + k;
								if (sum == x) {
									count++;
								}
							}
						}
					}
				}
			}
			cout << count << endl;
			count = 0;
		}
	}
}