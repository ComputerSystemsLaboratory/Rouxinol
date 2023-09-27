#include<stdio.h>

int main(){
int n,c;
while(1){

scanf("%d",&n);
if(n==0)break;
c=0;
n=1000-n;
do{
if(n>=500){n=n-500;c++;}
else if(n>=100){n=n-100;c++;}
else if(n>=50){n=n-50;c++;}
else if(n>=10){n=n-10;c++;}
else if(n>=5){n=n-5;c++;}
else if(n>=1){n=n-1;c++;}
}while(n!=0);
printf("%d\n",c);
}
return 0;
}