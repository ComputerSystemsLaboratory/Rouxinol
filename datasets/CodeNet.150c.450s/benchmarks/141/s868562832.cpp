#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <map>
#include <iomanip>
#include <vector>
#include <queue>
#include <set>

#define PI 3.14159265359

#define INF 99999999;

#define rep(i, n) for(int i=0; i<n; i++)
#define REP(n) rep(i, n)

typedef long long ll;

using namespace std;



/*
class TheKingsArmyDiv2
{
public:
	int getNumber(vector <string> state)
	{

	}
};
*/




int main()
{
	double x1, y1, x2, y2, x3, y3, xp, yp;
	double s, t;
	
	while (scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &xp, &yp) != EOF)
	{
		s = ((xp - x1) * (y3 - y1) - (yp - y1) * (x3 - x1)) /
			((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));
		t = ((xp - x1) * (y2 - y1) - (yp - y1) * (x2 - x1)) /
			((x3 - x1) * (y2 - y1) - (x2 - x1) * (y3 - y1));
		
		if (s > 0 && t > 0 && s + t < 1)
		{
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	
	return 0;
}