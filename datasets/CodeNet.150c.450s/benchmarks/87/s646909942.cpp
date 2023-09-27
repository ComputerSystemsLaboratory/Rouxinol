#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cstring>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

int h, point;
int f[11][6];

bool check() {
	bool res = false;
	for(int y=h-1; y>=0; y--) {
		for(int x=2; x<5; x++) {
			if(f[y][x]!=0 && f[y][x-2]==f[y][x] && f[y][x-1]==f[y][x]) {
				res = true;
				int dx=1;
				while(x+dx<5 && f[y][x]==f[y][x+dx]) dx++;
				point += f[y][x] * (3+dx-1);
				for(int ex=x-2; ex<x+dx; ex++) {
					f[y][ex] = 0;
				}
			}
		}
	}
	return res;
}

void fall() {
	int py[5] = {};
	rep(y, h) {
		rep(x, 5) {
			f[py[x]][x] = f[y][x];
			if(f[y][x]>0) {
				py[x]++;
			}
		}
	}
	rep(x, 5) {
		for(int y=py[x]; y<h; y++) {
			f[y][x] = 0;
		}
	}
}

int main() {
	while(cin >> h, h) {
		point = 0;
		memset( f, 0, sizeof(f) );
		rep(y, h) {
			rep(x, 5) {
				int k;
				cin >> k;
				f[h-y-1][x] = k;
			}
		}
		while(check()) {
			fall();
		}
		cout << point << endl;
	}
	return 0;
}