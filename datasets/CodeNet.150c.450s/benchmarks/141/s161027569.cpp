#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    double x1,y1,x2,y2,x3,y3,xp,yp;
    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp)!=EOF){
    //printf("%lf %lf %lf %lf %lf %lf %lf %lf\n",x1,y1,x2,y2,x3,y3,xp,yp);
        //printf("%s\n",(((x2-x1)*(y2-yp)-(y2-y1)*(x2-xp)>0)==((x3-x2)*(y3-yp)-(y3-y2)*(x3-xp)>0)==((x1-x3)*(y1-yp)-(y1-y3)*(x1-xp)>0))?"YES":"NO");
        //if((((x2-x1)*(y2-yp)-(y2-y1)*(x2-xp)>0)==true)&&(((x3-x2)*(y3-yp)-(y3-y2)*(x3-xp)>0)==true)&&(((x1-x3)*(y1-yp)-(y1-y3)*(x1-xp)>0)==true)){
        //printf("%lf %lf %lf\n",(x2-x1)*(y2-yp)-(y2-y1)*(x2-xp),(x3-x2)*(y3-yp)-(y3-y2)*(x3-xp),(x1-x3)*(y1-yp)-(y1-y3)*(x1-xp));
        if(((x2-x1)*(y2-yp)-(y2-y1)*(x2-xp)>0)&&((x3-x2)*(y3-yp)-(y3-y2)*(x3-xp)>0)&&((x1-x3)*(y1-yp)-(y1-y3)*(x1-xp)>0)){
            printf("YES\n");
        }else if(((x2-x1)*(y2-yp)-(y2-y1)*(x2-xp)<0)&&((x3-x2)*(y3-yp)-(y3-y2)*(x3-xp)<0)&&((x1-x3)*(y1-yp)-(y1-y3)*(x1-xp)<0)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }

    }
    return 0;
}