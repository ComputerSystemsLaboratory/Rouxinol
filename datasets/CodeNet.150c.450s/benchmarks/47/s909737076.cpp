#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int W, H, x, y, r;
	cin >> W >> H >> x >> y >> r;
	if (x < 0 || y < 0 || x > W || y > H || x - r < 0 || y - r < 0
		|| x+r>W||y+r>H){
		cout << "No" << endl;
	}
	if (x > 0 && y > 0 && x < W && y < H && x - r >= 0 && y - r >= 0
		&& x + r<=W && y + r<=H){
		cout << "Yes" << endl;
	}

	return 0;
}
