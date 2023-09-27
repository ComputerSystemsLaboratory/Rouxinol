#include<iostream>
using namespace std;
typedef struct{
	double x;
	double y;
}Point;
double get_area(Point p1,Point p2,Point p3)
{
	double area;
	area = (p1.x*p2.y+p2.x*p3.y+p3.x*p1.y-p2.x*p1.y-p3.x*p2.y-p1.x*p3.y)/2;
	if(area<0)
	{
		area = -area;
	}
	return area;
}
int main()
{
	Point pp[3];
	Point t;
	double area,area1,area2,area3;
	while(cin>>pp[0].x)
	{
		cin>>pp[0].y>>pp[1].x>>pp[1].y>>pp[2].x>>pp[2].y>>t.x>>t.y;
		area = get_area(pp[0],pp[1],pp[2]);
		area1 = get_area(pp[0],pp[1],t);
		area2 = get_area(pp[0],pp[2],t);
		area3 = get_area(pp[1],pp[2],t);
		if(area==(area1+area2+area3))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}