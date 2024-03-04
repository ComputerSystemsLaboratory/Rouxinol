#include<stdio.h>

int main(void){

int n;
int a,b;

while(scanf("%d %d",&a,&b) != EOF){
n = a + b;
int dig = 0;
while(n!=0){
n=n/10;
dig++;
}

printf("%d\n",dig);
}

return 0;
}

