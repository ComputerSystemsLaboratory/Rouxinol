#include<iostream>
#include<math.h>

using namespace std;

double menseki(double x1, double y1, double x2, double y2, double x3, double y3){
	double s;
	s=1.0/2*(y1*(x2-x3)+y2*(x3-x1)+y3*(x1-x2));
	if(s<0)s=-s;
	return s;
}

int main(){
	double x1,y1,x2,y2,x3,y3,xp,yp;
	double s,sp;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){
		s=menseki(x1,y1,x2,y2,x3,y3);
		sp=menseki(xp,yp,x2,y2,x3,y3)+menseki(x1,y1,xp,yp,x3,y3)+menseki(x1,y1,x2,y2,xp,yp);
		if(sp>s)cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}