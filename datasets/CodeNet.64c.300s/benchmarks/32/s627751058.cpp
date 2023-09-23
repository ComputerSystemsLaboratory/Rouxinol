#include<stdio.h>
int main(){
int n,a[100000],max=-1000000,min=10000000;
long sum=0;
scanf("%d",&n);
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++){
if(max<=a[i]){
max=a[i];
}if(min>=a[i]){
min=a[i];
}
sum+=(long)a[i];
}
printf("%d %d %ld\n", min, max, sum);
}