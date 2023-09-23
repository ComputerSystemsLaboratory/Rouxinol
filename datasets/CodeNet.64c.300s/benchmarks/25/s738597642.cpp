#include<stdio.h>
int main(void){
int a[4],b[4];
while(~scanf("%d",a)){
int h=0,l=0;
for(int i=0;i<3;)scanf("%d",++i+a);
for(int i=0;i<4;)scanf("%d",b+i++);
for(int i=0;i<4;i++)for(int j=0;j<4;j++){
if(a[i]==b[j])if(i==j)h++;else l++;
}
printf("%d %d\n",h,l);
}
return 0;
}