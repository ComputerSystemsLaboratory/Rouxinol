//#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//#include <iomanip>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <functional>
//#include <time.h>
//#include <sstream>
//#include <queue>

using namespace std;


int main(){

	double x[4],y[4],dx[3],dy[3],dpx[3],dpy[3];
	double th[3], pth[3];
	int check = 0;
	bool ans = true;


	while (	cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3]){
		ans = true;

		if (x[1] == 0 && y[1] == 0){
			swap(x[0], x[1]);
			swap(y[0], y[1]);
		}
		if (x[2] == 0 && y[2] == 0){
			swap(x[0], x[2]);
			swap(y[0], y[2]);
		}
		if (sin(atan2(y[1]-y[0], x[1]-x[0]) - atan2(y[2]-y[0], x[2]-x[0])) > 0){
			swap(x[1], x[2]);
			swap(y[1], y[2]);
		}

		for (int i = 0; i < 3; i++){
			dx[i] = x[(i + 1) % 3] - x[i];
			dy[i] = y[(i + 1) % 3] - y[i];
			dpx[i] = x[3] - x[i];
			dpy[i] = y[3] - y[i];
			th[i] = atan2(dy[i], dx[i]);
			pth[i] = atan2(dpy[i], dpx[i]);
		}

		for (int i = 0; i < 3; i++){
			if (sin(th[i] - pth[i])>0){
				ans = false;
				break;
			}
		}
		cout << (ans ? "YES" : "NO" )<< endl;
	}
}