#include <iostream>
using namespace std;

typedef struct{
	double x;
	double y;
} vec2D;

void setVec(vec2D &v,double x,double y){
	v.x=x;v.y=y;;
}

int main(){
	double x1,y1,x2,y2,x3,y3,xp,yp;
	vec2D v1,v2,v3,vp1,vp2,vp3;
	double z1,z2,z3;

	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){
		setVec(v1,x2-x1,y2-y1);
		setVec(v2,x3-x2,y3-y2);
		setVec(v3,x1-x3,y1-y3);
		setVec(vp1,xp-x1,yp-y1);
		setVec(vp2,xp-x2,yp-y2);
		setVec(vp3,xp-x3,yp-y3);

		z1=v1.x*vp2.y-v1.y*vp2.x;
		z2=v2.x*vp3.y-v2.y*vp3.x;
		z3=v3.x*vp1.y-v3.y*vp1.x;

		if((z1>0 && z2>0 && z3>0) || (z1<0 && z2<0 && z3<0)){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}