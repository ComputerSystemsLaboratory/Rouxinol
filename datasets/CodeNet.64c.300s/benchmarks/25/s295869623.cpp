#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double num, t;
	int a[4],b[4];
	int hit, brow;
	while ( cin >> a[0] >> a[1] >> a[2] >> a[3]  ) {
			cin >> b[0] >> b[1] >> b[2] >> b[3];
			
			hit = 0; brow = 0;
			for( int i = 0; i < 4; i++ ) {
				for( int j = 0; j < 4; j++ ) {
					if( b[i] == a[j] ) {
						if( i == j ) {
							hit++;
						}
						else  {
							brow++;
						}
					}
				}			
			}
			
			cout << hit  << " " << brow << endl;

	}

        return 0;
}
  