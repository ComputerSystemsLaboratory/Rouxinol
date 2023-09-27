#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int f( int x ) {
	return x * x;
}

int main(void){

	int d;
	while( scanf("%d",&d) != EOF ) {
		unsigned long long int ans = 0;
		for( int i = d; i <= 600 - d; i += d )
			ans += f( i ) * d;
		cout << ans << endl;
	}
    return 0;
}