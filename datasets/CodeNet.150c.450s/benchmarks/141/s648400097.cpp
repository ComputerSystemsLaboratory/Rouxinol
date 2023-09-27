#include<stdio.h>
#include<math.h>

int main(void){

	double x1,x2,x3,xp,y1,y2,y3,yp,l12,l23,l13,l1p,l2p,l3p,S123,S12p,S23p,S13p;

	while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp)!=EOF){

		l12=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		l23=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
		l13=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
		l1p=sqrt((x1-xp)*(x1-xp)+(y1-yp)*(y1-yp));
		l2p=sqrt((x2-xp)*(x2-xp)+(y2-yp)*(y2-yp));
		l3p=sqrt((x3-xp)*(x3-xp)+(y3-yp)*(y3-yp));
		S123=(sqrt((l12+l23+l13)*(-l12+l23+l13)*(l12-l23+l13)*(l12+l23-l13)))/4;
		S12p=(sqrt((l12+l2p+l1p)*(-l12+l2p+l1p)*(l12-l2p+l1p)*(l12+l2p-l1p)))/4;
		S13p=(sqrt((l1p+l3p+l13)*(-l1p+l3p+l13)*(l1p-l3p+l13)*(l1p+l3p-l13)))/4;
		S23p=(sqrt((l2p+l23+l3p)*(-l2p+l23+l3p)*(l2p-l23+l3p)*(l2p+l23-l3p)))/4;
		if(fabs(S123-(S12p+S13p+S23p))<0.1){
			puts("YES");
		}
		else{
			puts("NO");
		}
	}

	return 0;
}