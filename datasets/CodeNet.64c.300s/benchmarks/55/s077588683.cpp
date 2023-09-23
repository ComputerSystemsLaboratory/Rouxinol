#include<stdio.h>
int main(){
int a[1000000],aa=0,i;
for(i=0;aa<1;i++){
scanf("%d",&a[i]);
if(a[i]==0){
	aa=2;
}
}
for(int j=1;j<i;j++){
printf("Case %d: %d\n",j,a[j-1]);
}
return 0;
}