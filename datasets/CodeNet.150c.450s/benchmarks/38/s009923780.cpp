#include <stdio.h> 
 
 int main(void){ 
 int a;
 int b;
 int c; 
 int wwwwww;
 int i;
 int n;
      
 scanf("%d", &n); 
 for(i = 0; i < n; i++){ 
     scanf("%d %d %d", &a, &b, &c); 
     if(a > c){ 
      wwwwww = c;             
	  c = a; 
      a = wwwwww; 
    } 
     if(b > c){ 
       wwwwww = c; 
       c = b; 
       b = wwwwww; 
     } 
     if(a * a + b * b == c * c){ 
         printf("YES\n"); 
     }else{ 
         printf("NO\n"); 
     } 
 } 
 
 
 return 0; 
 } 