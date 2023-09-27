#include<cstdio>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        double x1,y1,x2,y2,x3,y3,x4,y4;
        scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        if((y2-y1)/(x2-x1)==(y4-y3)/(x4-x3)) printf("YES\n");
        else printf("NO\n");
    }
}