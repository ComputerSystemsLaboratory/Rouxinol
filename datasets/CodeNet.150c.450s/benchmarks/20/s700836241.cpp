#include <stdio.h>
  
int main(){
  
    int S = 0;
  
    scanf("%d", &S);
  
 
    int h = (int)(S / 3600);
    int m = (int)((S - (h * 3600)) / 60);

    printf("%d:%d:%d\n", h, m, (S % 60));
  
  
    return 0;
  
}