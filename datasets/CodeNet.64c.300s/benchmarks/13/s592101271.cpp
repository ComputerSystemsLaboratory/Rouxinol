#include<stdio.h>
#define N 45
int main(){
    int F[N];
    int n,i;
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        if(i==0 || i==1) F[i]=1;
        else F[i]=F[i-2]+F[i-1];
    }
    printf("%d\n",F[n]);
    return 0;
}