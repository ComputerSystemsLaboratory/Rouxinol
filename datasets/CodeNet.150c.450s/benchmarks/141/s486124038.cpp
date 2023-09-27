#include <iostream>
#include <vector>
using namespace std;

double gaiseki(double x1,double y1,double x2,double y2){

	double ab;
	ab = x1*y2 - y1*x2;
	if (ab>=0)
		ab=1;
	else
		ab=-1;
	return ab;
}

int main() {

	//A(x1,y1,0)
	//B(x2,y2,0)
	//C(x3,y3,0)
	
	double x1,y1,x2,y2,x3,y3,xp,yp;
	
	while(cin >>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){
		if (  ( gaiseki(x1-x2,y1-y2,xp-x2,yp-y2)+gaiseki(x2-x3,y2-y3,xp-x3,yp-y3)+gaiseki(x3-x1,y3-y1,xp-x1,yp-y1) == 3 )||( gaiseki(x1-x2,y1-y2,xp-x2,yp-y2)+gaiseki(x2-x3,y2-y3,xp-x3,yp-y3)+gaiseki(x3-x1,y3-y1,xp-x1,yp-y1) == -3 )  )
			cout << "YES" <<endl;
		else
			cout << "NO" <<endl;
	}

	return 0;
  
}