#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i){
		int Y, M, D, ans = 0;
		cin >> Y >> M >> D;
		if(Y % 3 == 0 || M % 2 == 1) ans += 20 - D;
		else ans += 19 - D;
		for(int j = M+1; j <= 10; j++){
			if(Y % 3 == 0 || j % 2 == 1) ans += 20;
			else ans += 19;	
		}
		for(int j = Y+1; j <= 999; j++){
			if(j % 3 == 0) ans += 200;
			else ans += 195;	
		}
		cout << ans+1 << endl;
	}	
}