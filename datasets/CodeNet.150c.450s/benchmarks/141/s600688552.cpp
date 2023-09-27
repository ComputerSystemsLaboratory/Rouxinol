//0012 A Point in a Triangle
//½ÊóÉA(x1,y1),(x2,y2),(x3,y3)ð¸_Æµ½Op`ª é
//»ÌOp`É_pªàÉÜÜêÄ¢éÈçÎYESA»¤ÅÈ¢ÈçNOÆoÍ¹æ
//È¨AOp`ÌÓãâ¸_ÍÜÜÈ¢àÌÆ·é

//üÍÍA¡ÌsÅ^¦çêAEOFÉÄI¹·é
//»ê¼êÌsÉÄAx1 y1 x2 y2 x3 y3 xp ypª¼pXy[XæØèÅ^¦çêé
//±êçÍ-100ÈãA100ÈºÌÀÅ é

#include<iostream>
#include<cmath>
using namespace std;

struct Point
{
	double x, y;
	Point(){}
	Point(double x, double y):x(x),y(y){}
};

//http://www5d.biglobe.ne.jp/~tomoya03/shtml/algorithm/Hougan.htm
//¼üÆüªÌ½è»èÅßé

//from1©çto1ÜÅÌ¼üÆAfrom2©çto2ÜÅÌüªªð·µÄ¢é©
//ßèlª0:¼üÆüªÍdÈÁÄ¢é@>0Fð·µÄ¢é@<0Fð·µÄÈ¢
double Intersect(const Point &from1, const Point &to1, const Point &from2, const Point &to2)
{
	return (
		((from1.x-to1.x)*(from2.y-from1.y) + (from1.y-to1.y)*(from1.x-from2.x)) *
		((from1.x-to1.x)*(to2.y-from1.y) + (from1.y-to1.y)*(from1.x-to2.x))
		);
}
bool IsInvolve(const Point &a, const Point &b, const Point &c, const Point &p)
{
	if(Intersect(a,b,p,c) <= 0)
		return false;
	if(Intersect(b,c,p,a) <= 0)
		return false;
	if(Intersect(c,a,p,b) <= 0)
		return false;
	return true;
}

int main(void)
{
	Point a, b, c, p;
	while(cin >> a.x >> a.y >> b.x >> b.y
		>> c.x >> c.y >> p.x >> p.y)
	{
		if(IsInvolve(a, b, c, p))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}