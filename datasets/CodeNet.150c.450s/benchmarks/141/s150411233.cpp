#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(){
	double x1,x2,x3,y1,y2,y3,xp,yp;
	double g1,g2,g3,g4;
	double p,q;
	
	while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp)!=EOF){
		g1 = ((xp-x1)*(y3-y1))-((yp-y1)*(x3-x1));
		g2 = ((x2-x1)*(yp-y1))-((y2-y1)*(xp-x1));
		g3 = ((x2-x1)*(y3-y1))-((x3-x1)*(y2-y1));
		p = g1/g3;
		q = g2/g3;
		if(p>0&&q>0&&p+q<1)
		printf("YES\n");
		else
		printf("NO\n");
	}
}