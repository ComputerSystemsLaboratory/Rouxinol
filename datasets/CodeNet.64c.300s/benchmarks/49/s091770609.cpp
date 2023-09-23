#include <stdio.h>

int main(){

long a,b,i,n;

while(scanf("%ld",&a)!=EOF){

scanf("%ld",&b);

n = a+b;

for(i=1;i<10;i++){

 n = n/10;

if(n==0) break;

}

printf("%ld\n",i);

}


}