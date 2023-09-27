#include<stdio.h>
int main(){
  int box[200000];
  int N,max,i,v,min;
  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d",&box[i]);
  }
  
  max=-10000000000;
  min=box[0];
 
    for(i=1;i<N;i++){
      
       v=box[i]-min;
      if(v>max) max=v;
       if(min>box[i]) min=box[i]; 
    }
 
  printf("%d\n",max);
  return 0;
}