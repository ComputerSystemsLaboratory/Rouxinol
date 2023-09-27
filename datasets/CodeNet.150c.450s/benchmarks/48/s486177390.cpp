#include<stdio.h>
#include<math.h>
int main(){


int E;
while(1){
scanf("%d",&E);if(E==0)break;
int min=E;int m=E,max=0;
int i=1;int y=0,z=0;
for(int j=0;j*j<=(E);j++){
	
for(int k=0;k*k*k<=(E-j*j);k++)
{i=E-j*j-k*k*k;//printf("%d %d %d\n",i,j,k*k*k);
	if(i+j*j+k*k*k>E)break;
	if(i>=0&&i+j*j+k*k*k==E&&i+j+k<min){min=i+j+k;max=j*j+k*k*k;y=j;z=k;}
}}
i=E-y*y-z*z*z;
m=i+y+z;
printf("%d\n",min);
}
return 0;
}