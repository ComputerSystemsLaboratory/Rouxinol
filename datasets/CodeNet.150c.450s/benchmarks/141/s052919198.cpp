#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cmath>

#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(x=from;x<to;x++)

using namespace std;

double smen(double x1, double y1, double x2, double y2, double x3, double y3){
	return abs((x3-x2) * (y1-y2) - (x1-x2)*(y3-y2) )* 0.5;
	
}

int main(void){

double x1,y1,x2,y2,x3,y3,xp,yp;

	while(cin >> x1 ){
		cin >> y1 >> x2 >> y2 >> x3 >> y3;
		cin >> xp >> yp;
			
		double saa = smen(x1,y1,x2,y2,x3,y3);
		double sa1 = smen(x1,y1,x2,y2,xp,yp);
		double sa2 = smen(x1,y1,xp,yp,x3,y3);
		double sa3 = smen(xp,yp,x2,y2,x3,y3);
		
		if(saa == sa1 + sa2 + sa3) cout << "YES" <<endl;
		else  cout << "NO" << endl;
	}
	
	return 0;
}