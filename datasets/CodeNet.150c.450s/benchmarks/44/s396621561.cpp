#include<cstdio>
int main(){
  int a1,a2,a3,a4,b1,b2,b3,b4;
  while(scanf("%d %d %d %d",&a1,&a2,&a3,&a4)>0){
    scanf("%d %d %d %d",&b1,&b2,&b3,&b4);
    int h=0,b=0;
    if(b1==a1) h++;
    if(b1==a2||b1==a3||b1==a4) b++;
    if(b2==a2) h++;
    if(b2==a1||b2==a3||b2==a4) b++;
    if(b3==a3) h++;
    if(b3==a1||b3==a2||b3==a4) b++;
    if(b4==a4) h++;
    if(b4==a1||b4==a2||b4==a3) b++;
    printf("%d %d\n",h,b);
  }
}