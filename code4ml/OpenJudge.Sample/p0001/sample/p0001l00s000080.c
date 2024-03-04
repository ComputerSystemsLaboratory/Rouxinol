#include <stdio.h>
#include <math.h>
 int main(void){
  int a,b;
   while(scanf("%d%d",&a,&b) != EOF){
     double x = a+b;
       double digit = log(x)/log(10.0);
	   int digitnew;
	   digitnew = floor(digit);
          printf("%d\n",digitnew+1);
}
return 0;
}