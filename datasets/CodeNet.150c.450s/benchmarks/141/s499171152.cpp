#include<iostream>
#include<cmath>
using namespace std;

double ts(double x1,double x2,double x3,double y1,double y2,double y3){
	return fabs(((x1*y2+x2*y3+x3*y1)-(x3*y2+x2*y1+x1*y3))/2);
}


int main(){
	
	double x1,x2,x3;
	double	y1,y2,y3;
	double xp,yp;
	
	while(cin>>x1){
		cin>>y1>>x2>>y2>>x3>>y3>>xp>>yp;
		
		double S,s1,s2,s3;
		S=ts(x1,x2,x3,y1,y2,y3);
		s1=ts(xp,x2,x3,yp,y2,y3);
		s2=ts(x1,xp,x3,y1,yp,y3);
		s3=ts(x1,x2,xp,y1,y2,yp);
		if(s1+s2+s3==S)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		
	}
	
}