#include <iostream>
#include <string>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	while(true){
		int n;
		cin >> n;
		if(n == 0){ break; }
		int answer = 0, cur = 0, next = 3;
		for(int i = 0; i < n; ++i){
			string s;
			cin >> s;
			if(s == "lu"){
				cur |= 1;
			}else if(s == "ru"){
				cur |= 2;
			}else if(s == "ld"){
				cur &= ~1;
			}else if(s == "rd"){
				cur &= ~2;
			}
			if(cur == next){
				++answer;
				next = cur ^ 3;
			}
		}
		cout << answer << endl;
	}
	return 0;
}