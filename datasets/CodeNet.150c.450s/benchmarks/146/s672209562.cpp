#include <stdio.h>
struct point{
    long double x;
    long double y;
};
int main(){
    int n;
    point a[4];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            scanf("%Lf%Lf",&a[j].x,&a[j].y);
        }
        if((a[1].x-a[0].x)*(a[3].y-a[2].y)==(a[3].x-a[2].x)*(a[1].y-a[0].y))printf("YES\n");
        else printf("NO\n");
    }
}