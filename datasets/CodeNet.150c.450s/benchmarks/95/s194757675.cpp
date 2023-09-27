#include <bits/stdc++.h>

using namespace std;

int main(){
	while(true){
		int n; cin >> n;
		if(n == 0)break;
		bool l = false, r = false;
		bool k = false;
		int cnt = 0;
		for(int i = 0; i < n; i++){
			string str; cin >> str;
			if(str == "lu"){
				if(r && !k){
					cnt++;
					k = true;
				}
				l = true;
			}
			else if(str == "ru"){
				if(l && !k){
					cnt++;
					k = true;
				}
				r = true;
			}
			else if(str == "ld"){
				if(k && !r){
					cnt++;
					k = false;
				}
				l = false;
			}
			else{
				if(k && !l){
					cnt++;
					k = false;
				}
				r = false;
			}
		}
		cout << cnt << endl;
	}


	return 0;
}


