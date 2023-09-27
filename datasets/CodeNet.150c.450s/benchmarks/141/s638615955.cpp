#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<queue>
#include<map>
#include<set>
#include<vector>
#include<list>
#include<stack>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;

struct Point{
	double x,y;
	Point(){}
	Point(double _x,double _y){
		x=_x; y=_y;
	}
};

struct Line{
	double x[2],y[2];
	Line(){}
	Line(Point p,Point q){
		x[0]=p.x; x[1]=q.x;
		y[0]=p.y; y[1]=q.y;
	}
};

void RevXY(Point &p){
	swap(p.x,p.y);
}

void RevXY(Line &l){
	for(int i=0;i<2;i++) swap(l.x[i],l.y[i]);
}

bool Is_SameSide(Line l,Point p,Point q){
	//printf("%lf,%lf - %lf,%lf\np(%lf,%lf),q(%lf,%lf)\n",l.x[0],l.y[0],l.x[1],l.y[1],p.x,p.y,q.x,q.y);
	if(l.x[1]==l.x[0]){
		RevXY(l); RevXY(p); RevXY(q);
	}
	double a,b;
	a = (l.y[1]-l.y[0])/(l.x[1]-l.x[0]);
	b = l.y[0]-a*l.x[0];
	//printf("%lf,%lf - %lf,%lf : y = %lfx+(%lf)\np(%lf,%lf),q(%lf,%lf)\n",l.x[0],l.y[0],l.x[1],l.y[1],a,b,p.x,p.y,q.x,q.y);
	if((p.y-(a*p.x+b))*(q.y-(a*q.x+b))>0) return true;
	else return false;
}

int main(){
	/*Line l;
	Point p,q;
	cin>>l.x[0]>>l.y[0]>>l.x[1]>>l.y[1]>>p.x>>p.y>>q.x>>q.y;
	printf("%lf,%lf - %lf,%lf\np(%lf,%lf),q(%lf,%lf)\n",l.x[0],l.y[0],l.x[1],l.y[1],p.x,p.y,q.x,q.y);
	if(Is_SameSide(l,p,q)==true) puts("YES");
	else puts("NO");*/
	Point t[3],p;
	while(cin>>t[0].x>>t[0].y){
		for(int i=1;i<3;i++) cin>>t[i].x>>t[i].y;
		cin>>p.x>>p.y;
		Point q = Point((t[0].x+t[1].x+t[2].x)/3,(t[0].y+t[1].y+t[2].y)/3);
		bool ans=true;
		for(int i=0;i<3;i++){
			if(Is_SameSide(Line(t[i],t[(i+1)%3]),p,q)==false){
				ans = false;
			}
		}
		if(ans) puts("YES");
		else puts("NO");
	}
}