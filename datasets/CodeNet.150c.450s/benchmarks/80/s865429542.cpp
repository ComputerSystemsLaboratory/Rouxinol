#include <stdio.h>
int main(){
int a=0,b=0,temp;
for(int i=0;i<4;i++){
scanf("%d",&temp);
a+=temp;
}
for(int i=0;i<4;i++){
scanf("%d",&temp);
b+=temp;
}
if(a>b)printf("%d\n",a);
else printf("%d\n",b);
}