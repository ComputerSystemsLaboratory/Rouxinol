#include<cstdio>
using namespace std;

int check( double x0, double y0, double x1, double y1, double x2, double y2 ){
	return (x1-x0)*(y2-y0)-(y1-y0)*(x2-x0) > 0 ? 1 : -1; 
}

int main(){
	double x[3], y[3], xp, yp;
	while( scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x[0],&y[0],&x[1],&y[1],&x[2],&y[2],&xp,&yp) != EOF ){
		int ch = check( x[0], y[0], x[1], y[1], xp, yp );
		ch += check( x[1], y[1], x[2], y[2], xp, yp );
		ch += check( x[2], y[2], x[0], y[0], xp, yp );
		if( ch==3 || ch==-3 ){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}