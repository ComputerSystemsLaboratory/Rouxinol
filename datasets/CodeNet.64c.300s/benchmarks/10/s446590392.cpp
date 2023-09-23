#include<stdio.h>
int main(void){
int a[3000],b[3000],d,e;
int c=0;
while(1){
scanf("%d %d",&a[c],&b[c]);
if(a[c]==0 && b[c]==0){
break;
}
c++;
}
for(d=0;d<c;d++){
if(a[d]>b[d]){
e=a[d];
a[d]=b[d];
b[d]=e;
}
printf("%d %d\n",a[d],b[d]);
}
return 0;
}



