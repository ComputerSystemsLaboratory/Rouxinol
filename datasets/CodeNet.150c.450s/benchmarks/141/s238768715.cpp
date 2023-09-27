#include <iostream>
#include <iomanip>
#include <math.h>
#include <utility>
#include <cstdlib>
using namespace std;

int main(){
	double x[3],y[3],xp,yp;
	while(cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> xp >> yp){
		//??????
		double gaiseki[3];
		for(int i=0;i<3;i++){
			double vx,vy,vxp,vyp;
			vx = x[(i+1)%3]-x[i];
			vy = y[(i+1)%3]-y[i];
			vxp = xp-x[i];
			vyp = yp-y[i];
			gaiseki[i] = vx*vyp-vy*vxp;
		}
		if((gaiseki[0]>0&&gaiseki[1]>0&&gaiseki[2]>0)||(gaiseki[0]<0&&gaiseki[1]<0&&gaiseki[2]<0)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}