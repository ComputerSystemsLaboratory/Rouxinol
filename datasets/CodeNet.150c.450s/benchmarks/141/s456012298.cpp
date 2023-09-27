#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#include<stdio.h>
using namespace std;

int main()
{
   double x1,x2,x3,y1,y2,y3,xp,yp;
    double gaiseki1,gaiseki2,gaiseki3;
 
    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp)!=EOF){
        gaiseki1 = (x2-x1)*(yp-y1)-(y2-y1)*(xp-x1);//全部右or全部左ならok
        gaiseki2 = (x3-x2)*(yp-y2)-(y3-y2)*(xp-x2);
        gaiseki3 = (x1-x3)*(yp-y3)-(y1-y3)*(xp-x3);
 
        if((gaiseki1>0&&gaiseki2>0&&gaiseki3>0) || (gaiseki1<0&&gaiseki2<0&&gaiseki3<0)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
