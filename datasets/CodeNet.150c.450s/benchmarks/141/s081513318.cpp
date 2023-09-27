#include <cstdio>
using namespace std;

int main(){
	double x1, y1, x2, y2, x3, y3, xp, yp;
	double X1, Y1, X2, Y2, X, Y, s, t;
	
	while((scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3, &xp, &yp)) != EOF){
		X1 = x2 - x1; Y1 = y2 - y1;
		X2 = x3 - x1; Y2 = y3 - y1;
		X = xp - x1; Y = yp - y1;
		
		s = (X * Y2 - X2 * Y) / (X1 * Y2 - X2 * Y1);
		t = (X * Y1 - X1 * Y) / (X2 * Y1 - X1 * Y2);
		
		if(s > 0 && t > 0 && s + t < 1) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}