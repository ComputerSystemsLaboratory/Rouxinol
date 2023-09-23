#include<stdio.h>
int main(void){
int a[31],b,c,i,j,k,l;
for(i=1;i<=30;i++){
    a[i]=i;
}
for(j=1;j<=28;j++){
    scanf("%d",&c);
    a[c]=0;
}


for(l=1;l<=30;l++){
    if(a[l]>0){
       printf("%d\n",a[l]);
    }
}
return 0;
}