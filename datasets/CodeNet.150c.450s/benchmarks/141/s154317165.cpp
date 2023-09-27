#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <queue>
#include <map>
#include <fstream>
#include <array>
#include <utility>
#include <functional>
using namespace std;
typedef long long Int;
#define REP(i , x) for(int i = 0 ; i < x ; ++i)

typedef pair<int, int> P;


struct point{
	double x, y;
};

double Func(point p1,point p2,point p3)
{
	double x1 = p2.x - p1.x;
	double y1 = p2.y - p1.y;
	double x2 = p3.x - p2.x;
	double y2 = p3.y - p2.y;

	return (x1*y2 - x2*y1);
}

int main()
{
	point p1, p2, p3, p4;
	while (cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y >> p4.x >> p4.y){

		string ans = (Func(p1, p2, p4) > 0 && Func(p2, p3, p4) > 0 && Func(p3, p1, p4) > 0)||
			(Func(p1, p2, p4) < 0 && Func(p2, p3, p4) < 0 && Func(p3, p1, p4) < 0)
			
			? "YES" : "NO";

		cout << ans << endl;
	}
	return 0;
}