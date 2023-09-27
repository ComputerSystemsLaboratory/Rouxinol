#include <iostream>
#include <sstream>
#include <cstring>
//#include <fstream>

using namespace std;

int osenbei[10][10000];
bool upsidedown[10];

int count_one (int col, int size )
{
	int i;
	int res = 0;

	for (i = 0; i < size; ++i){
		if ( ( upsidedown[i] && osenbei[i][col] == 0 )
		||   (!upsidedown[i] && osenbei[i][col] == 1 ) ){
			++res;
		} // end if
	} // end for

	return res;
}
	
int main()
{
//	cut here before submit 
//	freopen ("testcase.osenbei2", "r", stdin );
	int r,c;

	while (1){
		cin >> r >> c;

		if (r == 0 && c == 0 ){
			break;
		} // end if
		memset (osenbei, 0, sizeof (osenbei ) );
		
		int i,j;

		for (i = 0; i < r; ++i){
			for (j = 0; j < c; ++j){
				cin >> osenbei[i][j];
			} // end for
		} // end for

		int res = 1000000;

		// each row is all-search
		for (i = 0; i < (1 << r); ++i){
			memset (upsidedown, false, sizeof (upsidedown ) );
			for (j = 0; j < r; ++j){
				if (i & (1 << j ) ){
					upsidedown[j] = true;
				} // end if
			} // end for

			// eash col 
			// count number of 1,  automatically get number of 0.
			// return min number of 1 and number of 0.
			int sum = 0;
			for (j = 0; j < c; ++j){
				int one = count_one (j, r );
				int zero = r - one;
				sum += min (one, zero );
			} // end for
			res = min (res, sum );
		} // end for
		cout << (r*c - res) << endl;	

	} // end loop
		
	return 0;
}