#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<complex>

#define EPS (1e-10)
using namespace std;
#define PI (3.1415926535)

int main(){
	double x[4], y[4];
	bool left, right;
	double ax, ay, px, py;

	while(1){
		for(int i = 0; i < 4; i++){
			if(!(cin >> x[i] >> y[i])){
				return 0;
			}
		}

		left = false;
		right = false;
		for(int i = 0; i < 3; i++){
			ax = x[(i+1)%3]-x[i];
			ay = y[(i+1)%3]-y[i];
			px = x[3] - x[i];
			py = y[3] - y[i];
			if( ax*py-px*ay < 0){
				right = true;
			}else{
				left = true;
			}
		}

		if(left^right){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}

	return 0;
}