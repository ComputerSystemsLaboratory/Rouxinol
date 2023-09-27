#include<stdio.h>
int n,min=0x7fffffff,max=-0x7fffffff;
long long sum;
int data[10000];
int main(){
 scanf("%d",&n);
 for(int i=0;i<n;i++){
  scanf("%d",&data[i]);
  sum+=data[i];
  min=min>data[i]?data[i]:min;
  max=max<data[i]?data[i]:max;
 }
 printf("%d %d %lld\n", min, max, sum);
 return 0;
}