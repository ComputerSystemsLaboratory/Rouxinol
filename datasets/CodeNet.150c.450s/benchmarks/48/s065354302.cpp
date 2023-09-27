
#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <stdlib.h>
#include <math.h>
#include <list>
#include <algorithm>

using namespace std;

int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);

	while( 1 ) {
		int e;
		cin >> e;
		if( e == 0 ) break;
		unsigned long long int ans = e;
		for(long long int z = 0; z*z*z <= e; z++) {
			for(long long int y = 0; z*z*z + y*y <= e; y++) {
				long long int x = e - z*z*z - y*y;
				if( x + y + z <= ans ) ans = x + y + z;
			}
		}
		cout << ans << endl;
	}

	//while(1){}
	return 0;
}