#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> a(4), b(4);
	while( cin >> a[0] >> a[1] >> a[2] >> a[3] ){
		for( int i=0; i<4; ++i ) cin >> b[i];
		
		int hit = 0, blow = 0;
		for( int i=0; i<4; ++i ){
			for( int j=0; j<4; ++j ){
				if( a[i] == b[j] ){
					( i==j ? hit : blow ) += 1;	
				}
			}
		}
		cout << hit << ' ' << blow << endl;
	}
}