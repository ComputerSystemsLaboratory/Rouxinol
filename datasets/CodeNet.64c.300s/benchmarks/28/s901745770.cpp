#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
	int W, H, x, y, r;
	cin >> W >> H >> x >> y >> r;
	
	int minX = x - r;
	int maxX = x + r;
	int minY = y - r;
	int maxY = y + r;
	
	if(minX < 0 || maxX > W || minY < 0 || maxY > H){
		cout << "No" << endl;
	}else{
		cout << "Yes" << endl;
	}
	

	return 0;
}