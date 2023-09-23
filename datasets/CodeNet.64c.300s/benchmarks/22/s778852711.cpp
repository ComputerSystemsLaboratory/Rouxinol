#include<stdio.h>
 
int main() 
{
 int x,y,z,n,tmp; 
 tmp=0;
 scanf("%d",&n); 

while(n-->0)
 { 
scanf("%d",&x);scanf("%d",&y);scanf("%d",&z);  

if(x<y){tmp=y;y=x;x=tmp;} 
if(x<z){tmp=x;x=z;z=tmp;}
 if(y<z){tmp=z;z=y;y=tmp;} 

if(x*x==y*y+z*z)printf("YES\n");
 else printf("NO\n");     
} 
return 0; 
} 