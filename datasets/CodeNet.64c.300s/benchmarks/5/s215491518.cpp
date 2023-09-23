#include<stdio.h>
int main(){
int a[10],b=0,c;
for(int i=0;i<10;i++){
scanf("%d",&a[i]);
}
for(int i=0;i<3;i++){
for(int j=0;j<10;j++){
if(a[j]>b){
b=a[j];
c=j;
}
}
printf("%d\n",b);
b=0;
a[c]=0;
}
return 0;
}