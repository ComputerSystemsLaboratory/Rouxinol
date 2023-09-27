#include <iostream>

using namespace std;

struct P{
	double x;
	double y;
};

int ccw(P p0, P p1, P p2)
{
	double dx1 = p1.x-p0.x;
	double dy1 = p1.y-p0.y;
	double dx2 = p2.x-p0.x;
	double dy2 = p2.y-p0.y;
	
	if(dx1*dy2 > dy1*dx2){
		return 1;
	} 
	if(dx1*dy2 < dy1*dx2){
		return -1;
	}
	if((dx1*dx2 < 0) || (dy1*dy2 < 0)){
		return -1;
	}
	if((dx1*dx1+dy1*dy1)<(dx2*dx2+dy2*dy2)){
		return 1;
	}
	
	return 0;
}

int intersect(P p1, P p2, P p3, P p4)
{
	return (((ccw(p1, p2, p3)*ccw(p1, p2, p4)) <= 0)
				 &&((ccw(p3, p4, p1)*ccw(p3, p4, p2)) <= 0));
}

int main()
{
	bool f;
	P pr[3], o, g;
	
	while(cin >> pr[0].x >> pr[0].y >> pr[1].x >> pr[1].y >> pr[2].x >> pr[2].y >> o.x >> o.y){
		f = true;
		g.x = g.y = 0;
		for(int i = 0; i < 3; i++){
			g.x += pr[i].x;
			g.y += pr[i].y;
		}
		g.x /= 3.0;
		g.y /= 3.0;
		
		if(intersect(pr[0], pr[1], o, g) > 0){
			f = false;
		}
		if(f && intersect(pr[0], pr[2], o, g) > 0){
			f = false;
		}
		if(f && intersect(pr[2], pr[1], o, g) > 0){
			f = false;
		}
		if(f){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	
	return 0;
}