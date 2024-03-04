#include <stdio.h>
main(){
int a,b,c[3],i,keta[3]={0,0,0};
for(i=0;i<3;i++){
scanf("%d%d",&a,&b);
c[i]=a+b;
}
for(i=0;i<3;i++){
while(c[i]>0){
c[i]=c[i]/10;
keta[i]++;
}
}

for(i=0;i<3;i++){
printf("%d\n",keta[i]);
}
return 0;
}