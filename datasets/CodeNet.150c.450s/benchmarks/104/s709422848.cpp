#include<stdio.h>
 
int main(){
    int t[30];
    for(int i=0;i<30;i++)t[i]=i+1;
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=0;i<b;i++){
        int c,d;
        scanf("%d,%d",&c,&d);
        int s=t[c-1];
        t[c-1]=t[d-1];
        t[d-1]=s;
    }
    for(int i=0;i<a;i++)printf("%d\n",t[i]);
}
