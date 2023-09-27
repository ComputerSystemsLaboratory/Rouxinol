#include <iostream>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;

#define REP(var, count) for(int var=0; var<count; var++)

int DP[22][50010];

int main(void) {
	int N, M;
	cin >> N >> M;
	
	REP(y, N+1) {
		DP[0][y] = y;
	}
	
	REP(i, M) {
		int c;
		cin >> c;
		
		REP(y, N+1) {
			if ( y < c ) {
				DP[i+1][y] = DP[i][y];
			} else {
				DP[i+1][y] = min( { DP[i][y], DP[i][y-c] + 1, DP[i+1][y-c] + 1 } );
			}
			
		}
	
	}
	
	cout << DP[M][N] << endl;
}