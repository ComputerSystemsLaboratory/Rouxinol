#include <bits/stdc++.h>
using namespace std;

int main() {
	while(true) {
		int n, p, i = 0;
		cin >> n >> p;
		if(n == 0 && p == 0) break;
		vector<int> player;
		player.resize(n+1);
		while(true) {
			if(p > 0) {
				if(p == 1) {
					bool flag = true;
					for(int j=0; j<n; j++) if(i != j && player[j] != 0) flag = false;
					if(flag) break;
				}
				player[i]++;
				p--;
			} else {
				p += player[i];
				player[i] = 0;
			}
			i++;
			if(i >= n) i = 0;
		}
		cout << i << endl;
	}
	
	return 0;
}