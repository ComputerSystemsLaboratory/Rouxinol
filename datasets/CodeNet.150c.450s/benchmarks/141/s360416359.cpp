#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double x1, y1, x2, y2, x3, y3, xp, yp;
	double d_12, d_13, d_23, d_p1, d_p2, d_p3;
	double t1, t2, t3, t4, s1, s2, s3, s4;
	
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){
		
		d_12 = sqrt(pow((x2-x1), 2)+pow((y2-y1), 2));
		d_13 = sqrt(pow((x3-x1), 2)+pow((y3-y1), 2));
		d_23 = sqrt(pow((x3-x2), 2)+pow((y3-y2), 2));
		
		d_p1 = sqrt(pow((xp-x1), 2)+pow((yp-y1), 2));
		d_p2 = sqrt(pow((xp-x2), 2)+pow((yp-y2), 2));
		d_p3 = sqrt(pow((xp-x3), 2)+pow((yp-y3), 2));
		
		t1 = (d_12 + d_p1 + d_p2) / 2;
		t2 = (d_13 + d_p1 + d_p3) / 2;
		t3 = (d_23 + d_p2 + d_p3) / 2;
		t4 = (d_12 + d_13 + d_23) / 2;
		
		s1 = sqrt(t1*(t1-d_12)*(t1-d_p1)*(t1-d_p2));
		s2 = sqrt(t2*(t2-d_13)*(t2-d_p1)*(t2-d_p3));
		s3 = sqrt(t3*(t3-d_23)*(t3-d_p2)*(t3-d_p3));
		s4 = sqrt(t4*(t4-d_12)*(t4-d_13)*(t4-d_23));
		
		if(fabs((s1+s2+s3)-s4) < 1.0E-10){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
    return 0;
}