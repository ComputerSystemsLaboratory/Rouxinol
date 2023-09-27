#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <assert.h>
using namespace std;
typedef  struct{
	double x,y;
}coord;

int main(){
	coord  vPolygon[3],pPoint;
	while(cin >> vPolygon[0].x >> vPolygon[0].y){
		for (int i=1;i<3;i++) cin >> vPolygon[i].x >> vPolygon[i].y;
		cin >> pPoint.x >> pPoint.y;
		int count= 0;
		for (int i=0;i<3;i++){
			if ( ((vPolygon[i%3].y <= pPoint.y)&&(pPoint.y < vPolygon[(i+1)%3].y))
				|| ((vPolygon[(i+1)%3].y <= pPoint.y)&&(pPoint.y < vPolygon[i%3].y)) ){
				double vt = (pPoint.y - vPolygon[i%3].y)/(vPolygon[(i+1)%3].y - vPolygon[i%3].y);
			if (pPoint.x < vPolygon[i%3].x + ( vt * ( vPolygon[(i+1)%3].x - vPolygon[i%3].x) )){
				++count;
			}
		}
	}
	cout << ((count&1)?"YES":"NO") << endl;
}
}