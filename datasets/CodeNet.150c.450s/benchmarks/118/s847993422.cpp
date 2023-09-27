#include <stdio.h>
 
int main() {
 
  int n,y1,y3,mb,ms,y1000;
  int i,j,k;
  int a,b,c,e;
  int y[102] = {0};
  int m[102] = {0};
  int d[102] = {0};
  int sum[102] = {0};
 
  scanf("%d",&n);
 
  y1 = 20 + 19 + 20 + 19 + 20+ 19 + 20 + 19 + 20 +19;
  y3 = 20 * 10;
  a  = 1000 /3;
  b = 1000 - a -1;
 
  y1000 = a * y3 + b*y1;
  // printf("y1000 = %d\n" ,y1000); 
 
 
  for(i=0;i<n;i++) {
    a = b = c= e= 0;
 
    scanf("%d %d %d" ,&y[i],&m[i],&d[i]);
 
    a = y[i] / 3;
    b = y[i] - a - 1;
 
    sum[i] = a * y3 + b * y1;
    //   printf("sumy = %d\n",sum[i]);
 
    c = m[i] / 2;
    e = m[i] - c-1;
 
    if(y[i] % 3 != 0) {
    sum[i] = sum[i] + 20*c + 19 * e;
 
    } else sum[i] = sum[i] + 20 *(m[i] - 1)-5;
 
    //    printf("summ = %d\n",sum[i]);
 
    sum[i] = sum[i] + d[i]- 1;
    
 
    printf("%d\n",y1000 - sum[i]);
 
  }
 
  return 0;
 
}