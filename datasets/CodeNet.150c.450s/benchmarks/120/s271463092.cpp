#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
#include <array>
#include <stack>
#include <queue>
#include <chrono>
#include <numeric>
#include <memory.h>
#include <map>

#pragma warning(disable:4996)
#define REP(i,n) for(int i = 0 ; i < n ; ++i)
typedef long long Int;

using namespace std;

int dx[4] = { 0, -1, 0, 1 };
int dy[4] = { 1, 0, -1, 0 };

const Int M_H(10);
const Int M_W(10000);

short tile[M_H][M_W];
bool all[M_H];
int H, W;

int main()
{
	cin.tie(0); ios::sync_with_stdio(false);
	//fstream fs("input.txt");
	//fstream fg("0525-input.txt");
	////////////ここから開始///////////
	//fs >> W >> H;
	while (cin >> H >> W, H && W){
		REP(i, M_H)REP(j, M_W)tile[i][j] = 2;
		REP(i, H)REP(j, W){ cin >> tile[i][j]; }
		
		Int ans(0),max_(0);

		for (int i = 0; i < 1 << H; ++i){
			short temptile[M_H][M_W];
			REP(m, H){ REP(n, W){ temptile[m][n] = tile[m][n]; } }
			ans = 0;
			for (int j = 0; j < H; ++j){
				all[H - j - 1] = i >> j & 1;
			}
			REP(m, H){
				if (all[m]){
					REP(n, W){
						if (temptile[m][n])
							temptile[m][n] = 0;
						else
							temptile[m][n] = 1;
					}
				}
			}
			int t(0);
			REP(n, W){
				t = 0;
				REP(m, H){
					t += temptile[m][n];
				}
				t = max(t, H - t);
				ans += t;
			}
			max_ = max(max_, ans);
		}
		cout << max_ << endl;
	}

	return 0;
}