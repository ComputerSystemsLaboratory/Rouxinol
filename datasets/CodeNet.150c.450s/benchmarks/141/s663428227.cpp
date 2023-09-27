#include <iostream>
#include <cmath>
using namespace std;

struct Vec2d{
  double x,y;
};

double cross(Vec2d &A, Vec2d &B){
  return A.x*B.y - A.y*B.x;
}

int main(void){
  double x1,y1,x2,y2,x3,y3,xp,yp;
  while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){
	  Vec2d AB,AP,BC,BP,CA,CP;
	  AB.x = x2-x1; AB.y = y2-y1;
	  BC.x = x3-x2; BC.y = y3-y2;
	  CA.x = x1-x3; CA.y = y1-y3;
	  AP.x = xp-x1; AP.y = yp-y1;
	  BP.x = xp-x2; BP.y = yp-y2;
	  CP.x = xp-x3; CP.y = yp-y3;
	  if(cross(AB,AP)>0.0 && cross(BC,BP)>0.0 && cross(CA,CP)>0.0)
	  	cout<<"YES"<<endl;
	  else if(cross(AB,AP)<0.0 && cross(BC,BP)<0.0 && cross(CA,CP)<0.0){
	  	cout<<"YES"<<endl;
	  }else
	  	cout<<"NO"<<endl;
  }
  return 0;
}