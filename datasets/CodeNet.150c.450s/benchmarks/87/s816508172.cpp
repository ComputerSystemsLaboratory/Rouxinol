//#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<bitset>
#include<algorithm>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<string>
#include<string.h>
#include<cmath>
#include<utility>
#include<functional>
#include<map>
#include<set>


#define FOR(i, a, b) for( int i=(a);i<=(b);i++)
#define RFOR(i, a, b) for( int i=(a);i>=(b);i--)
#define LFOR(i, a, b) for( long long int i=(a);i<=(b);i++)
#define LRFOR(i, a, b) for(long long int i=(a);i>=(b);i--)
#define MOD 1000000007
#define INF 1000000000 //2000000000
#define LLINF 1000000000000000000 //9000000000000000000
#define PI 3.14159265358979

using namespace std;
typedef long long int ll;
typedef pair< long long int, long long  int> P;


int main(void) {

	while (1) {
		int h;
		int dp[11][6] = {};
		
		int score = 0;

		cin >> h;
		if (h == 0) {
			break;
		}
		FOR(i, 1, h) {
			FOR(j, 1, 5) {
				cin >> dp[i][j];
			}
		}

		while (1) {
			int colum[6] = {};
			FOR(i, 1, h) {
				if (dp[i][1] == dp[i][2] && dp[i][2] == dp[i][3] && dp[i][3] == dp[i][4] && dp[i][4] == dp[i][5] && dp[i][1] != 0) {
					score += dp[i][1] * 5;
					colum[1]++;
					colum[2]++;
					colum[3]++;
					colum[4]++;
					colum[5]++;
					dp[i][1] = 0;
					dp[i][2] = 0;
					dp[i][3] = 0;
					dp[i][4] = 0;
					dp[i][5] = 0;
				}
				else if (dp[i][1] == dp[i][2] && dp[i][2] == dp[i][3] && dp[i][3] == dp[i][4] && dp[i][1] != 0) {
					score += dp[i][1] * 4;
					colum[1]++;
					colum[2]++;
					colum[3]++;
					colum[4]++;
					dp[i][1] = 0;
					dp[i][2] = 0;
					dp[i][3] = 0;
					dp[i][4] = 0;
				}
				else if (dp[i][2] == dp[i][3] && dp[i][3] == dp[i][4] && dp[i][4] == dp[i][5] && dp[i][2] != 0) {
					score += dp[i][2] * 4;
					colum[2]++;
					colum[3]++;
					colum[4]++;
					colum[5]++;
					dp[i][2] = 0;
					dp[i][3] = 0;
					dp[i][4] = 0;
					dp[i][5] = 0;
				}
				else if (dp[i][1] == dp[i][2] && dp[i][2] == dp[i][3] && dp[i][1] != 0) {
					score += dp[i][1] * 3;
					colum[1]++;
					colum[2]++;
					colum[3]++;
					dp[i][1] = 0;
					dp[i][2] = 0;
					dp[i][3] = 0;
				}
				else if (dp[i][2] == dp[i][3] && dp[i][3] == dp[i][4] && dp[i][2] != 0) {
					score += dp[i][2] * 3;
					colum[2]++;
					colum[3]++;
					colum[4]++;
					dp[i][2] = 0;
					dp[i][3] = 0;
					dp[i][4] = 0;
				}
				else if (dp[i][3] == dp[i][4] && dp[i][4] == dp[i][5] && dp[i][3] != 0) {
					score += dp[i][3] * 3;
					colum[3]++;
					colum[4]++;
					colum[5]++;
					dp[i][3] = 0;
					dp[i][4] = 0;
					dp[i][5] = 0;
				}

			}
			if (colum[1] == 0 && colum[2] == 0 && colum[3] == 0 && colum[4] == 0 && colum[5] == 0) {
				break;
			}

			FOR(i, 1, 5) {
				while (colum[i] > 0) {
					RFOR(j, h, 1) {
						if (dp[j][i] == 0) {
							dp[j][i] = dp[j - 1][i];
							dp[j - 1][i] = 0;
						}
					}
					colum[i]--;
				}
			}
		}
		

		cout << score << endl;
	}

	return 0;
}
