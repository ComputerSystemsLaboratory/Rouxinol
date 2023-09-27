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
#include<iomanip>
 
#define EPS (1e-10)
using namespace std;
#define PI (3.1415926535)
 
int main(){
	double x[4], y[4];
	int n;

	cin >> n;

	while(n--){
		for(int i = 0; i < 4; i++){
			cin >> x[i] >> y[i];
		}
		double px, py, qx, qy;
		px = x[1] - x[0];
		py = y[1] - y[0];
		qx = x[3] - x[2];
		qy = y[3] - y[2];

		if(px*qy - qx*py == 0){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}

	return 0;
}