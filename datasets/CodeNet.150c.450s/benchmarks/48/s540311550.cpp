#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
	int e;
	while( cin >> e , e ){
		int ans = 1e+8;
		
		for(int y=0 ; y <= 1000 ; y++ ){
			for(int z=0 ; z <= 100 ; z++ ){
				int x = e - y*y - z*z*z;
				if( x < 0 ) continue;
				ans = min( ans , x+y+z );
			}
		}
		cout << ans << endl;
	}
}