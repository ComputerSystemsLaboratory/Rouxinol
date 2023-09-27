#include <bits/stdc++.h>
using namespace std;

int main(void) {
	while(1) {
		int n; cin >> n;
		if(n == 0) break;
		string f[110];
		for(int i = 0; i < n; i++) {
			cin >> f[i];
		}
		
		int prev = 0;
		int cnt = 0;
		int r = 0, l = 0;
		for(int i = 0; i < n; i++){
			string t = f[i];
			if(t == "lu") l++;
			else if(t == "ru") r++;
			else if(t == "ld") l--;
			else if(t == "rd") r--;
			
			if(r == l) {
				if(r - 1 == prev || r + 1 == prev) cnt++;
				prev = r;
			}
		}
	
		cout << cnt << endl;
	}
	return 0;
}