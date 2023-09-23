#include <iostream>
using namespace std;

int bm[] = {20, 19, 20, 19, 20, 19, 20, 19, 20, 19};
int lm[] = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20};

const int Y = 1000, M = 10;

int days[Y] = {};

int main(){
	int n, y, m, d, ds;
	int bms = 0, lms = 0;
	cin >> n;
	for(int i = 0;i < M;++i){
		bms += bm[i];
		lms += lm[i];
	}
	for(int i = 0;i < n;++i){
		cin >> y >> m >> d;
		ds = 0;
		for(int ms = m; ms <= M; ++ms){
			ds += (y % 3 == 0) ? lm[ms - 1] : bm[ms - 1];
			if(ms == m){
				ds -= d;
				++ds;
			}
		}
		for(int ys = y + 1; ys < Y; ++ys){
			if(ys % 3 == 0){
				ds += lms;
			}
			else{
				ds += bms;
			}
		}
		cout << ds << endl;
	}
}