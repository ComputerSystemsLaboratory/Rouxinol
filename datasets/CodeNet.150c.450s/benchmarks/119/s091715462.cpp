#include <iostream>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
using namespace std;

void solve(vector<vector<bool> > land)
{
	vector<vector<bool> > check(land.size(), vector<bool>(land[0].size(), false));

	int num = 0;
	for(unsigned i=1; i<land.size()-1; ++i){
		for(unsigned j=1; j<land[0].size()-1; ++j){
			if(!land[i][j] || check[i][j])
				continue;
			check[i][j] = true;
			++ num;

			queue<pair<int, int> > place;
			place.push(make_pair(i,j));
			while(!place.empty()){
				int y = place.front().first;
				int x = place.front().second;
				for(int dy=-1; dy<=1; ++dy){
					for(int dx=-1; dx<=1; ++dx){
						if(land[y+dy][x+dx] && !check[y+dy][x+dx]){
							check[y+dy][x+dx] = true;
							place.push(make_pair(y+dy, x+dx));
						}
					}
				}
				place.pop();
			}
		}
	}

	cout << num << endl;
}

int main()
{
	for(;;){
		int w, h;
		cin >> w >> h;
		if(w == 0 && h == 0)
			break;

		vector<vector<bool> > land(h+2, vector<bool>(w+2, false));
		for(int i=1; i<=h; ++i){
			for(int j=1; j<=w; ++j){
				int tmp;
				cin >> tmp;
				land[i][j] = (tmp == 1);
			}
		}

		solve(land);
	}

	return 0;
}