#include <bits/stdc++.h>
using namespace std;

#define for_(i,a,b) for(int i=(a);i<(b);++i)

int coin[6] = {500, 100, 50, 10, 5, 1};

int main() {
	int N;
	
	while (cin >> N, N) {
		int A = 1000 - N, ans = 0;
		
		for_(i,0,6) {
			while (A >= coin[i]) {
				A -= coin[i];
				++ans;
			}
		}
		
		cout << ans << endl;
	}
}