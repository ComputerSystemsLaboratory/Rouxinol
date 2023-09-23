#include <stdio.h>
long long int f(int n){
if(n==1)return 1;
else return f(n-1)*n;
}
int main(){
int n;
scanf("%d",&n);
printf("%lld\n",f(n));
}