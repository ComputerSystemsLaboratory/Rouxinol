#include<iostream>
#include<queue>
#include<utility>
using namespace std;
void search(int, int);
int c[60][60] = {}, map[60][60] = {};
void mapDraw(int,int);
queue< pair<int, int> > q;
int w, h;

int main() {

	while (1) {
		
		//initialize
		int count = 0;
		for (int i = 0; i < 60; i++) {
			for (int j = 0; j < 60; j++) {
				c[i][j] = 0;
				map[i][j] = 0;
			}
		}


		cin >> w >> h;
		if (w == 0 && h == 0) break;
		//input
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> c[i][j];
			}
		}

		//search
		//unresearched:0, land:2, sea:1
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (map[i][j] == 0) {
					map[i][j] = c[i][j] + 1;
					if (c[i][j] == 1) {
						q.push(make_pair(i, j));
						count++;
					}
				}

				pair<int, int> cur = make_pair(i, j);
				while (!q.empty()) {
					cur = q.front();
					int x = cur.second;
					int y = cur.first;
					q.pop();

					//cerr << "( " << y << ", " << x << " )now"<< endl;

					for (int a = -1; a <= 1; a++) {
						for (int b = -1; b <= 1; b++) search(y + a, x + b);
					}
				}
			}
		}

		cout << count << endl;
	}


	return 0;
}

void search(int i, int j) {
	if (i < h&&i >= 0 && j < w&&j >= 0) {
		if (map[i][j] == 0) {
			map[i][j] = c[i][j] + 1;
			if (c[i][j] == 1) q.push(make_pair(i, j));
		}
	}
	//mapDraw(w, h);
}

void mapDraw(int w, int h) {
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cerr << map[i][j];
		}
		cerr << endl;
	}
	cerr << endl;
}