#include<stdio.h>

int main(){

int x,y,z;
scanf("%d %d",&x,&y);
while(x!=0||y!=0){
if(x>y){
z=x;
x=y;
y=z;
}
printf("%d %d\n",x,y);
scanf("%d %d",&x,&y);
}




return 0;
}