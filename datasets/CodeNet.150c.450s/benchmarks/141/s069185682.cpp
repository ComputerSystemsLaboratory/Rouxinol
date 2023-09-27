#include <stdio.h>
#include <math.h>
 
int main()
{
    double x1, x2, x3, y1, y2, y3, xp, yp;
    double s, s1, s2, s3;
     
    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp) != EOF){
        //?????§????¢??????¢???
        s  = ((x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1)) / 2.0; 
        s1 = ((xp - x1) * (y2 - y1) - (yp - y1) * (x2 - x1)) / 2.0;
        s2 = ((xp - x1) * (y3 - y1) - (yp - y1) * (x3 - x1)) / 2.0;
        s3 = ((xp - x2) * (y3 - y2) - (yp - y2) * (x3 - x2)) / 2.0;
         
        s  = fabs(s);
        s1 = fabs(s1);
        s2 = fabs(s2);
        s3 = fabs(s3);
         
        if (fabs(s -fabs(s1 + s2 + s3))<1e-10) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}