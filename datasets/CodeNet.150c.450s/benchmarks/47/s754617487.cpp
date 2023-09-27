#include <iostream>
#include <stdio.h>
#include <algorithm>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main(){
	int W, H, x, y, r;
	cin >> W;
	cin >> H;
	cin >> x;
	cin >> y;
	cin >> r;

	int lowerLimmit = r;
	int upperLimmitX = W - r;
	int upperLimmitY = H - r;

	if (	lowerLimmit <= x && x <= upperLimmitX 
		&&	lowerLimmit <= y && y <= upperLimmitY ) {
		cout << "Yes" << endl;
	
	} else {
		cout << "No" << endl;		
	}
}