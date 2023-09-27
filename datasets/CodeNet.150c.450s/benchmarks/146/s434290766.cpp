#include <cstdio>
#include <cmath>

int main(){
 int n;
 scanf("%d\n",&n);
 for(int i = 0;i < n;i++){
  float x1,x2,x3,x4,y1,y2,y3,y4;
  scanf("%f %f %f %f %f %f %f %f\n",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
  if(atan((y1 - y2) / (x1 - x2)) == atan((y3 - y4) / (x3 - x4))){
   printf("YES\n");
  }else{
   printf("NO\n");
  }
 }
}