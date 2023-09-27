#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

#define max 999999 + 1

int main(void){

	vector< bool > table( max, true );
	vector< int > p( max, 0 );
	table[0] = false;
	table[1] = false;

	for( int i = 2; i < max; i++ ) {
		if( table[i] == false ) continue;
		for( int j = 2 * i; j < max; j+=i ) {
			table[j] = false;
		}
	}

	for( int i = 1; i < max; i++ ) {
		p[i] = p[i - 1] + table[i];
	}

	int n;
	
	while( scanf("%d", &n ) != EOF ) {
		cout << p[n] << endl;
	}

    return 0;
}