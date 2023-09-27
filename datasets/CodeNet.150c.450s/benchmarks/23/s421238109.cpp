

#include<stdio.h>
#define N 45
 
int main(){
int i,n,F[N];
F[0]=F[1]=1;

for(i=2;i<N;i++){
F[i]=F[i-1]+F[i-2];
}
scanf("%d",&n);
printf("%d\n",F[n]);
return 0;
}