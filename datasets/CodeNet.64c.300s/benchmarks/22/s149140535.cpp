#include<stdio.h>
 
int main(){
    int a;
    scanf("%d",&a);
    while(a--){
        int b,c,d;
        scanf("%d%d%d",&b,&c,&d);
        int max=b;
        if(b<c)max=c;
        if(max<d)max=d;
        if(max*max==b*b+c*c+d*d-max*max)printf("YES\n");
        else printf("NO\n");
    }
}