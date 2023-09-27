#include<iostream>
using namespace std;
bool cross(double x1,double y1,double x2,double y2,
	double x3,double y3,double x4,double y4){
		double f1,f2;
		f1=(x2-x1)*(y1-y3)+(y2-y1)*(x3-x1);
		f2=(x2-x1)*(y1-y4)+(y2-y1)*(x4-x1);
		if(f1*f2<=0){
			return true;
		}else{
			return false;
		}
}
int main(void){
	double x1,y1,x2,y2,x3,y3,xp,yp;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){
		double xg,yg;
		xg=(x1+x2+x3)/3.0;
		yg=(y1+y2+y3)/3.0;
		bool flag;
		if(cross(x1,y1,x2,y2,xp,yp,xg,yg)){
			flag=false;
		}else if(cross(x2,y2,x3,y3,xp,yp,xg,yg)){
			flag=false;
		}else if(cross(x3,y3,x1,y1,xp,yp,xg,yg)){
			flag=false;
		}else{
			flag=true;
		}
		if(flag){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}