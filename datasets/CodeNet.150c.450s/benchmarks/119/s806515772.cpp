#include <iostream>
#include <stack>
#include <utility>

using namespace std;

typedef pair<int, int> pii;

int field[52][52];

int main(){
	while(true){
		int w, h;
		cin >> w >> h;
		if(w == 0 && h == 0){ break; }
		for(int x = 0; x <= w + 1; ++x){ field[0][x] = field[h + 1][x] = 0; }
		for(int y = 1; y <= h; ++y){
			field[y][0] = field[y][w + 1] = 0;
			for(int x = 1; x <= w; ++x){ cin >> field[y][x]; }
		}
		int answer = 0;
		for(int y = 1; y <= h; ++y){
			for(int x = 1; x <= w; ++x){
				if(field[y][x] == 0){ continue; }
				++answer;
				std::stack<pii> stk;
				stk.push(pii(x, y));
				while(!stk.empty()){
					pii pt = stk.top();
					stk.pop();
					if(field[pt.second][pt.first] > 0){
						field[pt.second][pt.first] = 0;
						stk.push(pii(pt.first - 1, pt.second - 1));
						stk.push(pii(pt.first - 1, pt.second));
						stk.push(pii(pt.first - 1, pt.second + 1));
						stk.push(pii(pt.first, pt.second - 1));
						stk.push(pii(pt.first, pt.second + 1));
						stk.push(pii(pt.first + 1, pt.second - 1));
						stk.push(pii(pt.first + 1, pt.second));
						stk.push(pii(pt.first + 1, pt.second + 1));
					}
				}
			}
		}
		cout << answer << endl;
	}
	return 0;
}