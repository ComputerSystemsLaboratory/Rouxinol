#include <iostream>
using namespace std;

int main(){
	int x,y,res;
	cin >> x >> y;
	while(1){
		if(x >= y){
			x = x%y;
			if(x == 0){
				res = y;
				break;
			}
		}
		else{
			y = y%x;
			if(y == 0){
				res = x;
				break;
			}
		}
	}
	cout << res << endl;
	return 0;
}