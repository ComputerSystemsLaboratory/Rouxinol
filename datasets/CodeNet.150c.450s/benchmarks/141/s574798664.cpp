#define _USE_MATH_DEFINES
#define INF 0x3f3f3f3f
#include <cstdio>
#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <stack>
#include <limits>
#include <map>
#include <string>
#include <cstring>
#include <set>
#include <deque>
#include <bitset>
#include <list>
#include <cctype>
#include <utility>

using namespace std;

typedef long long ll;
typedef pair <int,int> P;
typedef pair <int,P > PP;

int tx[] = {0,1,0,-1};
int ty[] = {-1,0,1,0};

static const double EPS = 1e-8;

class Point{
public:
	double x;
	double y;
	Point(double _x, double _y) : x(_x), y(_y) {}
};

bool isInterSect(const Point& p1,const Point& p2,const Point& p3,const Point& p4){
	    if (((p1.x - p2.x) * (p3.y - p1.y) + (p1.y - p2.y) * (p1.x - p3.x)) * 
        ((p1.x - p2.x) * (p4.y - p1.y) + (p1.y - p2.y) * (p1.x - p4.x)) < 0){
			if (((p3.x - p4.x) * (p1.y - p3.y) + (p3.y - p4.y) * (p3.x - p1.x)) * 
            ((p3.x - p4.x) * (p2.y - p3.y) + (p3.y - p4.y) * (p3.x - p2.x)) < 0){
				return true;
			}
		}

		return false;
}

double getArea(const Point& p1, const Point& p2,const Point& p3){
	double a = hypot(p1.x-p2.x,p1.y-p2.y);
	double b = hypot(p2.x-p3.x,p2.y-p3.y);
	double c = hypot(p3.x-p1.x,p3.y-p1.y);

	double s = (a+b+c)/2.0;

	return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main(){
	double x1,y1,x2,y2,x3,y3;
	double xp,yp;
	while(~scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp)){
		double S1 = getArea(Point(x1,y1),Point(x2,y2),Point(x3,y3));

		double S2 = getArea(Point(xp,yp),Point(x2,y2),Point(x3,y3));
		double S3 = getArea(Point(x1,y1),Point(xp,yp),Point(x3,y3));
		double S4 = getArea(Point(x1,y1),Point(x2,y2),Point(xp,yp));

		if(S1 - EPS <= S2+S3+S4 && S2+S3+S4 <= S1 + EPS){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}