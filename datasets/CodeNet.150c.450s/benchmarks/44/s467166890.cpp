#include<iostream>
using namespace std;

int a[4], b[4];

int main() {
	while( cin >> a[0] ) {
		int i, j;
		for( i = 1; i < 4; i++ )
			cin >> a[i];
		for( i = 0; i < 4; i++ )
			cin >> b[i];
			
		int hit = 0, blow = 0;
		for( i = 0; i < 4; i++ )
			hit += (a[i] == b[i]);
		
		for( i = 0; i < 4; i++ ) {
			for( j = 0; j < 4; j++ ) {
				if ( a[i] == b[j] ) {
					break;
				}
			}
			blow += (j < 4);
		}
		blow -= hit;
		
		cout << hit << " " << blow << endl;
	}
	return 0;
}