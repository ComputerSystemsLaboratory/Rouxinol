#include <stdio.h>
int main(void){
int n,i,j;
scanf("%d",&n);
int a[15][10]={};
for(i=0;i<n;i++){
    int b,f,r,v;
    scanf("%d%d%d%d",&b,&f,&r,&v);
    a[4*(b-1)+f-1][r-1]+=v;
}
for(i=0;i<15;i++){
    for(j=0;j<20;j++){
        if(i%4==3)
        printf("#");
        else if(j%2==0)
        printf(" ");
        else
        printf("%d",a[i][(j-1)/2]);
    }
    printf("\n");
}

return 0;
}