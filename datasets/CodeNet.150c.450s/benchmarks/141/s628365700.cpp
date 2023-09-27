#include <iostream>
using namespace std;

struct point{
	double x;
	double y;
};

int ccw(point p0, point p1, point p2){
	double dx1, dx2, dy1, dy2;
	dx1 = p1.x - p0.x;
	dy1 = p1.y - p0.y;
	dx2 = p2.x - p0.x;
	dy2 = p2.y - p0.y;
	if(dx1 * dy2 > dy1 * dx2){
		return 1;
	}else if(dx1 * dy2 < dy1 * dx2){
		return -1;
	}else return 0;
}

int main(){
	point p1, p2, p3, p0;
	while(cin >> p1.x >> p1.y >> p2.x >>p2.y
		>> p3.x >> p3.y >> p0.x >> p0.y)
	{
		if(ccw(p0,p1,p2) && ccw(p0,p2,p3) && ccw(p0, p3, p1)){
			if((ccw(p0, p1, p2 ) != ccw(p0, p1, p3))
				&& (ccw(p0, p2, p1) != ccw(p0, p2, p3)))
				cout << "YES" << endl;
			else cout << "NO" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}