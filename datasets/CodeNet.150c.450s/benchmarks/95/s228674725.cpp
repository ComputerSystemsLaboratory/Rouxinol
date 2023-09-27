#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <map>
using namespace std;

int main() {
	
	while(true){
		int N;
		cin >> N;
		
		if(N == 0){
			break;
		}
		
		bool is_floor = true;
		
		bool r_floor = true;
		bool l_floor = true;
		
		int ans = 0;
		
		for(int i = 0; i < N; i++){
			string str;
			cin >> str;
			if(str == "ld"){
				l_floor = true;
			}
			if(str == "rd"){
				r_floor = true;
			}
			if(str == "lu"){
				l_floor = false;
			}
			if(str == "ru"){
				r_floor = false;
			}
			if(l_floor && r_floor){
				if(!is_floor){
					ans++;
				}
				is_floor = true;
			}else if(!l_floor && !r_floor){
				if(is_floor){
					ans++;
				}
				is_floor = false;
			}
		}
		
		cout << ans << endl;
		
	}
	return 0;
}


