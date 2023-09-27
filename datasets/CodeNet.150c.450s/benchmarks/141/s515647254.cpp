#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

#define FOR(i,s,e) for (int i = int(s); i != int(e); i++)
#define REP(i,e) for (int i = 0; i != int(e); i++)
#define FORIT(i, A) for (auto i : A)
#define ISEQ(c) (c).begin(), (c).end()
#define PRINT(x) cout << (x) << endl
#define SZ(x) ((int)(x).size())

class vector2d
{
public:
	vector2d(float vx, float vy) : x(vx), y(vy)
	{}
	void normalize()
	{
		float n = sqrt(x*x + y*y);
		x /= n;
		y /= n;	
	}
public:
	float x,y;
};

float dot(vector2d& v1, vector2d& v2)
{
	return v1.x*v2.x + v1.y*v2.y;
}

float cross(vector2d& v1, vector2d& v2)
{
	return v1.x*v2.y - v2.x*v1.y;
}

int main(int argc, char const *argv[])
{
	float x1, y1, x2, y2, x3, y3, xp, yp;
	while(scanf("%f %f %f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3, &xp, &yp) != EOF)
	{
		float miny = (y1 < y2) ? y1 : y2;
		miny = (miny < y3) ? miny : y3;
		if (miny == y2)
		{
			swap(x2, x1);
			swap(y2, y1);
		}
		else if (miny == y3)
		{
			swap(x3, x1);
			swap(y3, y1);
		}
		vector2d v1(x2-x1,y2-y1); v1.normalize();
		vector2d v2(x3-x1,y3-y1); v2.normalize();
		vector2d ve(1.0,0.0);
		bool ans = true;
		vector2d vp1(xp-x1,yp-y1);
		vector2d vp2(xp-x2,yp-y2);
		vector2d vp3(xp-x3,yp-y3);
		if (dot(ve,v1) < dot(ve,v2))
		{
			vector2d v2(x3-x2,y3-y2);
			vector2d v3(x1-x3,y1-y3);
			ans &= cross(v1, vp1) < 0;
			ans &= cross(v2, vp2) < 0;
			ans &= cross(v3, vp3) < 0;
		}
		else
		{
			vector2d v1(x3-x1,y3-y1);
			vector2d v2(x1-x2,y1-y2);
			vector2d v3(x2-x3,y2-y3);
			ans &= cross(v1, vp1) < 0;
			ans &= cross(v2, vp2) < 0;
			ans &= cross(v3, vp3) < 0;
		}
		if (ans)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}