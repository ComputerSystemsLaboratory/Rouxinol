#include <iostream>

using namespace std;

int main(){
	int n; cin >> n;
	while(n--){
		int Y, M, D; cin >> Y >> M >> D;
		int res = 0;
		if(Y%3 != 0 && M%2 == 0) res += 20-D;
		else                     res += 21-D;
		for(int m=M+1;m<=10;m++){
			if(Y%3 != 0 && m%2 == 0) res += 19;
			else                     res += 20;
		}
		for(int y=Y+1;y<=999;y++){
			if(y%3 == 0) res += 200;
			else         res += 195;
		}
		cout << res << endl;
	}
}