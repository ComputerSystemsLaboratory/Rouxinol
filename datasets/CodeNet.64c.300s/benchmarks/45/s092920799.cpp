#include <stdio.h>
 
int main() {
 
  int n,m,p;
  int b,c;
  int i,j,k;
  int sum;
 
  while (1) {
    b = 0;
    sum = 0;
    int a[101] = {0};
    double p;
    c = 0;
    
 
    scanf("%d %d %lf",&n,&m,&p);
 
    if(n == 0 && m ==0 && p ==0)break;
 
    for(i = 0; i<n; i++) {
      scanf("%d", &a[i]);
      b = b + a[i];
    }
 
    b = b * 100;
    p = p / 100;
    //printf("p = %f",p);
 
    if(a[m-1] == 0) {
      c = 0;
    } else {
      p = b - b*p;
      c = p / a[m-1];
    }
 
    printf("%d\n",c);
     
 
  }
 
  return 0;
}