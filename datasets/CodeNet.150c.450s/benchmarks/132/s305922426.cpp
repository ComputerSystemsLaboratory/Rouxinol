#include "bits/stdc++.h"
using namespace std;

int main() {
	int n,p;
	while (cin >> n>>p) {
		if (!n)break;
		int ans = -1, i = 0;
		vector<int> v(n,0);
		int c = p;
		
		while (ans<0) {
			for (i=0; i < n; ++i) {
				if (!c) {
					c = v[i];
					v[i] = 0;
				}else{
					v[i]++;
					c--;
				}
				if (p == v[i]) {
					ans = i;
					break;
				}
				
			}
		}
		cout << ans << endl;
		
	}
	return 0;
}
