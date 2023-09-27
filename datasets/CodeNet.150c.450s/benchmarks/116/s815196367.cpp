#include <stdio.h>
int main(){
while(1){
int k,n,i,j,x[100000];
long long int max=0,sum=0;
scanf("%d%d",&n,&k);
if(n==0 && k==0) break;
for(i=0;i<n;i++){
scanf("%d",&x[i]);
}
for(i=0;i<k;i++){
	sum+=x[i];
}
for(i=1;i<=n-k;i++){
	if(x[i-1]<x[i+k-1]){
	sum=0;
for(j=i;j<i+k;j++){
sum+=x[j];
}
if(max<sum) max=sum;
	}
}
printf("%lld\n",max);
}
return 0;
}