#include <bits/stdc++.h>

using namespace std;

struct Point{
	double x,y;
	Point(double x=0.0,double y=0.0):x(x),y(y){}
};

typedef Point Vector;

double cross(Vector a,Vector b){
	return a.x*b.y-a.y*b.x;
}

int main(){
	double x1,y1,x2,y2,x3,y3,xp,yp;
	while(~scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp)){
		Vector v1(x2-x1,y2-y1),v2(x3-x2,y3-y2),v3(x1-x3,y1-y3);
		Vector u1(xp-x1,yp-y1),u2(xp-x2,yp-y2),u3(xp-x3,yp-y3);
		if (cross(v1,u1)*cross(v2,u2)>0 && cross(v2,u2)*cross(v3,u3)>0){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}