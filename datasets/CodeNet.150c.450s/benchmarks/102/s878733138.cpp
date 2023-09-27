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
	point(int _x, int _y) :x(_x), y(_y){}
};

char tile[20][20];
stack<point> st;

int main()
{
	cin.tie(0); ios::sync_with_stdio(false); 
	//fstream fs("input.txt");
	////////////ここから開始///////////

	
	int x(-1), y(-1);
	while (true){
		REP(i, 20)REP(j, 20)tile[i][j] = '#';
		cin >> x >> y;
		if (x == 0 && y == 0)
			break;
		//fs >> x >> y;
		REP(i, y){
			REP(j, x){
				cin >> tile[i][j];
				//fs >> tile[i][j];
			}
		}

		REP(i, y){
			REP(j, x){
				if (tile[i][j] == '@')
					st.emplace(i, j);
			}
		}

		int dx[]{0, 1, 0, -1};
		int dy[]{1, 0, -1, 0};
		int ans(1);

		while (!st.empty()){
			point now = st.top();
			st.pop();
			REP(i, 4){
				int x1 = now.x + dx[i];
				int y1 = now.y + dy[i];
				if (x1 > 19 || x1 < 0 || y1 > 19 || y1 < 0)
					continue;

				if (tile[x1][y1] == '.'){
					st.emplace(x1, y1);
					tile[x1][y1] = '#';
					++ans;
				}
			}
		}

		cout << ans << endl;
	}
	return 0;
}