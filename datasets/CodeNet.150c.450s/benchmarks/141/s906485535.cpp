#include <stdio.h>
struct point{
    double x;
    double y;
};
double abs(double a){
    if(a<0)return -a;
    return a;
}
double triangle(point a,point b,point c){
    return abs(a.x*b.y+b.x*c.y+c.x*a.y-a.y*b.x-b.y*c.x-c.y*a.x);
}
int main(){
    point a[4];
    while(scanf("%lf%lf",&a[0].x,&a[0].y)!=EOF){
        for(int i=1;i<4;i++)scanf("%lf%lf",&a[i].x,&a[i].y);
        if(triangle(a[0],a[1],a[2])==triangle(a[0],a[1],a[3])+triangle(a[0],a[2],a[3])+triangle(a[2],a[1],a[3])){
            printf("YES\n");
        }
        else printf("NO\n");
    }
}