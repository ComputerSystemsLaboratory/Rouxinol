#include <iostream>
#include <cstdio>
using namespace std;

bool m(double a1, double b1, double a2, double b2){
	bool key;

	if(a1==0){
		if(a2==0) key=true;
		else key=false;
	}
	else{
		if(a2==0) key=false;
		else{
			if(b1/a1==b2/a2) key=true;
			else key=false;		
		}
	}

	return key;
}

int main(){
	double x1,x2,x3,xp,y1,y2,y3,yp;
	while( scanf(" %lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &xp, &yp) != EOF ){
		
		//(x1,y1)が原点に来るように平行移動
		x2-=x1; y2-=y1; x3-=x1; y3-=y1; xp-=x1; yp-=y1;
		x1-=x1; y1-=y1;
		
		//printf(" %lf %lf %lf %lf %lf %lf %lf %lf\n", x1, y1, x2, y2, x3, y3, xp, yp);
		
		bool ans;
		
		//(xp,yp)が辺の延長線上にあるとき
		if(m(x2,y2,xp,yp) || m(x3,y3,xp,yp)){
			ans=false;
		}
		else{
			double p, q;
			
			if(x2!=0){
				q=(yp-xp*y2/x2)/(y3-x3*y2/x2);
				p=(xp-q*x3)/x2;
			}
			else{
				q=xp/x3;
				p=(yp-q*y3)/y2;
			}
		
			//printf("p=%lf, q=%lf\n",p ,q);
		
			if(0<p && p<1 && 0<q && q<1 && p+q<1) ans= true;
			else ans=false;
		}
		
		if(ans) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}