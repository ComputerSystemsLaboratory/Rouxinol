#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
	while(cin >> n) {
		if(n <= 0 || n > 50) continue;
		int ret = 0;
		for(int i = 0; i <= 9; i++) {
			for(int j = 0; j <= 9; j++) {
				for(int k = 0; k <= 9; k++) {
					for(int l = 0; l <= 9; l++) {
						if(i + j + k + l == n) ret++;
					}
				}
			}
		}
		cout << ret << endl;
	}
}