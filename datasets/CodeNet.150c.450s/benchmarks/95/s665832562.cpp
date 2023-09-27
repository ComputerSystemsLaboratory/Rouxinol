#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	while(cin >> n && n){
		string s;
		int prev = 0; /* 0: 地面に両足, 1: 踏み台の上に両足 */
		int ans = 0, nl = 0, nr = 0;
		for(int i = 0; i < n; ++i){
			cin >> s;
			if(s == "lu"){
				nl = 1;
			}
			if(s == "ru"){
				nr = 1;
			}
			if(s == "ld"){
				nl = 0;
			}
			if(s == "rd"){
				nr = 0;
			}
			if(!prev && nl && nr){
				prev = 1;
				ans++;
			}
			else if(prev && !nl && !nr){
				prev = 0;
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}