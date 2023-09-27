#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	int e;
	while( cin >> e , e ){
		int ans = 1e+8;
		for(int y=0 ; y <= 1000 ; y++ ){
			for(int z=0 ; z <= 100 ; z++ ){
				int x = e - y*y - z*z*z;
				int m = x + y + z;
				if( x >= 0 ){
					ans = min(ans, m);
				}
			}
		}
		cout << ans << endl;
	}
}