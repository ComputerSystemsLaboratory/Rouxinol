#include <iostream>
#include <cstdio>
using namespace std;

bool judge(double s1, double t1, double s2, double t2, double s3, double t3, double xp, double yp);

int main(){
	double x1, y1, x2, y2, x3, y3, xp, yp;

	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
		if(judge(x1,y1,x2,y2,x3,y3,xp,yp) && judge(x2,y2,x1,y1,x3,y3,xp,yp) && judge(x3,y3,x1,y1,x2,y2,xp,yp)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}

	return(0);
}


bool judge(double s1, double t1, double s2, double t2, double s3, double t3, double xp, double yp){
	double a, b1, b2, b3;

	if(s2-s3 == 0.0){
		if(min(s1,s2) < xp && xp < max(s1,s2)){
			return true;
		}else{
			return false;
		}
	}else{
		a = (t2-t3)/(s2-s3);
		b1 = t2 - a*s2;
		b2 = t1 - a*s1;
		b3 = yp - a*xp;
	}

	if(min(b1,b2) < b3 && b3 < max(b1,b2)){
		return true;
	}else{
		return false;
	}
}