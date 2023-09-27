#include <stdio.h>
int main(){
int n;
scanf("%d",&n);
printf("%d:",n);
while(n%2==0){
n/=2;
printf(" 2");
}
for(int i=3;i*i<=n;i++){
while(n%i==0){
n/=i;
printf(" %d",i);
}
}
if(n!=1)printf(" %d",n);
printf("\n");
}