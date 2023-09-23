#include<stdio.h>
int main(){
    int a,b,c,d,e,f;
    while(~scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f)){
        double y=(double)(c*d-a*f)/(double)(b*d-a*e);
        if(a!=0)
        printf("%.3f %.3f\n",(c-b*y)/a,y);
        else
        printf("%.3f %.3f\n",(f-e*y)/d,y);
    }
}