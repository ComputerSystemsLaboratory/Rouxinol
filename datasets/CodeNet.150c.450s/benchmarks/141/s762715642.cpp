#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

struct point{
    double x,y;
    point(double _x , double _y){
        x = _x , y = _y;
    }
};

bool insidePoly( point p,vector<point>P  ) {
	bool inside = false;
	int n = P.size();
	for( int i = 0, j = n - 1; i < n; j = i++ )
		if( (( P[i].x < p.x ) ^ ( P[j].x < p.x )) &&
        (P[i].y - P[j].y) * fabs(p.x - P[j].x) < (p.y - P[j].y) * abs(P[i].x - P[j].x) )
			inside = !inside;
	return inside;
}

int main()
{

     double x,y;
    while(cin>>x>>y)
    {
        vector<point>P;
        P.push_back(point(x,y));

        for( int i = 0 ; i < 2 ; i++ ){
                scanf("%lf %lf",&x,&y);
                P.push_back(point(x,y));
        }
        scanf("%lf %lf",&x,&y);

        bool f = insidePoly(point(x,y),P);

        if(f)puts("YES"); else puts("NO");

    }
}