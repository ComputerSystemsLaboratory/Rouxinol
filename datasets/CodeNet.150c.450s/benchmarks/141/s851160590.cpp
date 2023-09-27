#include <iostream>
#include <math.h>
using namespace std;
double helon(double x1,double y1,double x2,double y2,double x3,double y3){
	double a,b,c,s,area;
	a = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	b = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	c = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	return area;
}

int main(){
	double e=0.0000001;
	double x1,y1,x2,y2,x3,y3,xp,yp;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){
		double s,s1,s2,s3;
		s = helon(x1,y1,x2,y2,x3,y3);
		s1 = helon(xp,yp,x1,y1,x2,y2);
		s2 = helon(xp,yp,x2,y2,x3,y3);
		s3 = helon(xp,yp,x3,y3,x1,y1);
		//cout<<s<<" "<<s1<<" "<<s2<<" "<<s3<<endl;
		if(fabs(s1)<e || fabs(s2)<e || fabs(s3)<e)
			cout<<"NO"<<endl;
		else if(fabs(s-(s1+s2+s3))<e)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		
	}
	return 0;
}