#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>

using namespace std;

int W, H, x, y, r;
int main(){
	cin >> W >> H >> x >> y >> r;

	if (x - r < 0 || y - r < 0){
		cout << "No" << endl;
	}
	else if (x + r > W || y + r > H){
		cout << "No" << endl;
	}
	else{
		cout << "Yes" << endl;
	}
 
	return 0;
}