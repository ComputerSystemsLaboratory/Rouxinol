#include <iostream>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;

#define REP(var, count) for(int var=0; var<count; var++)

int dp[1010][1010];

int main(void) {
	int Q;
	cin >> Q;
	
	REP(data, Q) {
		
		string xstr, ystr;
		cin >> xstr;
		cin >> ystr;
		
		for(int x=0; x<xstr.size()+1; x++) {
			dp[x][0] = 0;
			
			for(int y=1; y<ystr.size()+1; y++) {
				if (x==0) { dp[0][y] = 0; continue; }
				
				if ( xstr[x-1] == ystr[y-1] ) {
					dp[x][y] = dp[x-1][y-1] + 1;
				} else {
					dp[x][y] = max(dp[x-1][y], dp[x][y-1]);
				}
				
			}
		}
		
		cout << dp[xstr.size()][ystr.size()] << endl;
	}

}