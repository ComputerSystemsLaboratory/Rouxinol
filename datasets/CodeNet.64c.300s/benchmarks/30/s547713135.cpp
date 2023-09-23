#include <iostream>
using namespace std;

int main(){
	int x;
	while( cin >> x, x ){
		x = 1000 - x;
		int ans = 0;
		while( x > 0 ){
			ans++;
			if( x >= 500 ){
				x -= 500;
			}else if( x >= 100 ){
				x -= 100;
			}else if( x >= 50 ){
				x -= 50;
			}else if( x >= 10 ){
				x -= 10;
			}else if( x >= 5 ){
				x -= 5;
			}else{
				x--;
			}
		}
		cout << ans << endl;
	}
}