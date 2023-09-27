

#include<stdio.h>
int main(){
int a,b,c[4][13]={0},d,e,f,g;
char z;
scanf("%d",&a);
for(b=0;b<a;b++){
scanf("%s %d",&z,&e);
if(z=='S')
d=0;
if(z=='H')
d=1;
if(z=='C')
d=2;
if(z=='D')
d=3;
c[d][e-1]=1;
}
for(b=0;b<4;b++){
if(b==0)
z='S';
if(b==1)
z='H';
if(b==2)
z='C';
if(b==3)
z='D';
for(f=0;f<13;f++){
if(c[b][f]!=1)
printf("%c %d\n",z,f+1);
}
}
return 0;
}
 

 