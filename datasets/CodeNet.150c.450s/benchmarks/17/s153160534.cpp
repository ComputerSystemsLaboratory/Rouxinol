#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int main(void){

	vector< int > v( 5, 0 );

	for( int i = 0; i < 5; i++ )
		cin >> v[i];

	sort( v.begin(), v.end() );
	
	cout << v[4];
	for( int i = 3; i >= 0; i-- )
		cout << " " << v[i];

	cout << endl;

    return 0;
}