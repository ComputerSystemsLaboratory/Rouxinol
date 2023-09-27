#include<stdio.h> 
#include<math.h>
int main() 
{ 
      int a,b; 
      while(scanf("%d%d",&a,&b)!=EOF) 
      { 
         int x=a+b; 
         int cnt=0; 
         while(x) 
           { 
		      cnt++; 
              x/=10; 
           } 
         printf("%d\n",cnt); 
      } 
      return 0; 
} 