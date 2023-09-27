#include <bits/stdc++.h>
using namespace std;

int main(void){
	while(true){
		int n;
		cin >> n;
		if(n == 0) break;
		bool floor = true;
		bool r = true, l = true;
		string f;
		int cnt = 0;
		for(int i = 0; i < n; ++i){
			cin >> f;
			if(f == "lu"){
				l = false;
			}
			if(f == "ru"){
				r = false;
			}
			if(f == "ld"){
				l = true;
			}
			if(f == "rd"){
				r = true;
			}
			if(!floor && r && l){
				cnt++;
				floor = !floor;
			}
			if(floor && !r && !l){
				cnt++;
				floor = !floor;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
