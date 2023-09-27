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

#pragma warning(disable:4996)
#define REP(i,n) for(int i = 0 ; i < n ; ++i)
typedef long long Int;

using namespace std;

struct point{
	int x;
	int y;
	point(int _y, int _x) :y(_y), x(_x){}
};

char tile[101][101];
stack<point> st;

int main()
{
	cin.tie(0); ios::sync_with_stdio(false);
	//fstream fs("input.txt");
	////////////ここから開始///////////


	int x(-1), y(-1);
	while (cin >> y >> x, x && y){
		REP(i, 101)REP(j, 101)tile[i][j] = 'C';
		REP(i, y){
			REP(j, x){
				cin >> tile[i][j];
			//	fs >> tile[i][j];
			}
		}

		int ans(0);
		int dx[]{0, 1, 0, -1};
		int dy[]{1, 0, -1, 0};

		REP(i, y){
			REP(j, x){
				if (tile[i][j] != 'C'){
					++ans;
					char now_c(tile[i][j]);
					tile[i][j] = 'C';
					st.emplace(i, j);
					while (!st.empty()){
						point now = st.top();
						st.pop();
						REP(i, 4){
							int x1 = now.x + dx[i];
							int y1 = now.y + dy[i];
							if (x1 >= x || x1 < 0 || y1 >= y || y1 < 0)
								continue;

							if (tile[y1][x1] == now_c){
								st.emplace(y1, x1);
								tile[y1][x1] = 'C';
							}
						}
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}