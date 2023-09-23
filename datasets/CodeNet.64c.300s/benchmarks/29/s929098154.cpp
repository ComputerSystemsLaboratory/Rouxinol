#include <stdio.h>
int main()
{
  int a,x,y,z,min;
  while(1){
    scanf("%d",&a);
    x=0;
    y=0;
    z=0;
    min=1000000;
    if(a==0)break;
    for(z=0;z*z*z<=a;z++){
      for(y=0;a-z*z*z>=y*y;y++){
      }
      y--;
      x=a-(z*z*z)-(y*y);
      //printf("%d %d %d\n",x,y,z);/// 
      if(min>x+y+z)min=x+y+z;
    }
    printf("%d\n",min);
  }
  return 0;
}