#include<stdio.h> 
int main() 
{ 
      int a,b,x,w; 
      while(scanf("%d %d",&a,&b)!=EOF) 
      { 
         x=a+b;
		 w=0; 
         while(x) 
           { 
		      w++; 
              x/=10; 
           } 
         printf("%d\n",w); 
      } 
      return 0; 
} 