#include <stdio.h>
int main(){
int p[100];
int n,q;
q=0;
scanf("%d",&n);
for(int i=0;i<n;i++){
scanf("%d",&q);p[i]=q;
}
for(int k=(n-1);k>=0;k--){
printf("%d",p[k]);
if(k>(0))printf(" ");
}
printf("\n");
return 0;
}