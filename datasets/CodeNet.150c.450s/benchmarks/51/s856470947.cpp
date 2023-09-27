#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


int main(void){

	vector< bool > v( 30, true );

	for( int i = 0; i < 28; i++ ) {
		int n;
		cin >> n;
		v[n-1] = false;
	}

	for( int i = 0; i < 30; i++ ) {
		if( v[i] ) cout << i + 1 << endl;
	}

    return 0;
}