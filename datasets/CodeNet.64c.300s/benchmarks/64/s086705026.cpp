#include<stdio.h>

int main(){

     int a, b, c;

     scanf ("%d %d", &a, &b);

     if (a > b) {
          while(b != 0) {
               c = b;
               b = a % c;
               a = c;
          } 
     }

     else {
          while(a != 0) {
               c = a;
               a = b % c;
               b = c;
          } 
     }
 
     printf ("%d\n", c);
  
     return 0;


}