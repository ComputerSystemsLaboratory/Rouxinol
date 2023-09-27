#include <stdio.h>

int main(void)
{
  int n,i;
  long double x1,y1,x2,y2,x3,y3,x4,y4;
  int ans[100];
  
  scanf("%d", &n);
  for(i = 0;i < n;i++){
    scanf("%Lf %Lf %Lf %Lf %Lf %Lf %Lf %Lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
  
    if( (y2-y1)*(x4-x3) == (y4-y3)*(x2-x1) ){
      ans[i] = 1;
    }else{
      ans[i] = 0;
    }
  }

  for(i = 0;i < n;i++){
    if(ans[i] == 1){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }
  return 0;
}