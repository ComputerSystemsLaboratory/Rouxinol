#ifndef _WIN32
#include<iostream>
#endif
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<functional>
#include<vector>
#include<queue>
#include<string>
#include<stdlib.h>

using namespace std;

bool func(int w1, int h1, int w2, int h2){
	int l1 = w1*w1 + h1*h1;
	int l2 = w2*w2 + h2*h2;
	if (l1 < l2)return true;
	if (l1 == l2 && h1 < h2)return true;
	return false;
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	cout << fixed << setprecision(30);
	int h, w;
	while (cin >> h >> w){
		if (h == 0 && w == 0)return 0;
		int rw = w + 1;
		int rh = h + 1;
		for (int i = 1; i <20001; i++){ //w
			for (int j = 1; j<101; j++){//h
				if (i <= j)continue;
				if (func(w, h, i, j)){
					if (func(i, j, rw, rh)){
						rw = i;
						rh = j;
					}
				}
			}
		}
		cout << rh << " " << rw << endl;
	}

	return 0;
}