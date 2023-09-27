#include "bits/stdc++.h"
using namespace std;

int main() {
	int n;
	int dxy[] = { 0,1,0,-1,0 };
	//char f2d[] = { 'N','E','S','W' };
	string f2d = "NESW";
	while (cin >> n) {
		if (!n)break;
		
		vector<vector<int> > field(21,vector<int>(21,0));
		
		for (int i = 0; i < n; ++i) {
			int _x, _y;
			cin >> _x >> _y;
			field[_x][_y] = 1;
			
		}
		int x = 10, y = 10;
		int m;
		cin >> m;

		int move; char f;

		for (int i = 0; i < m; ++i) {
			cin >> f >> move;
			int idx = (int)f2d.find(f);

			for(int j=0;j<move;j++){
				x += dxy[idx];
				y += dxy[idx+1];
				if (field[x][y]) {
					field[x][y] = 0;
					n--;
				}

			}
		}

		if (!n)cout << "Yes" << endl;
		else cout << "No" << endl;
		
	}
	return 0;
}
