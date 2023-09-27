#include <stdio.h>

int main(void) {

  int n;
  double x1,y1,x2,y2,x3,y3,x4,y4;
  int i;
  char c;
  
  scanf("%d",&n);

  //c=getchar();

  for(i=0;i<n;i++) {
    
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);

    if(x2-x1==0.0) {
      if(x4-x3==0.0) printf("YES\n");
      else printf("NO\n");
    }

    else if((x2-x1)*(y4-y3)==(x4-x3)*(y2-y1)) printf("YES\n");
    else printf("NO\n");

  }

  return 0;

}