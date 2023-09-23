#include<stdio.h>
int main(){
int a[100],s,i=0;
scanf("%d",&s);
while(i<s){
scanf("%d",&a[i]);
i++;
}
i--;
for(;i>-1;i--){
printf("%d",a[i]);
if(i!=0)printf(" ");
}
printf("\n");
}