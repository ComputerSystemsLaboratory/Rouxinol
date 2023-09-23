#include<stdio.h>
 
int main(void){
  int i,n;
  long data,min=1000000,max=-1000000,sum=0;
 
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%ld",&data);
    if(data<min)min=data;
    if(data>max)max=data;
    sum+=data;
  }
  printf("%ld %ld %ld\n",min,max,sum);
}