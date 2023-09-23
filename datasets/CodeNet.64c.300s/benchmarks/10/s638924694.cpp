#include<stdio.h>
#define N 65536

int main(){
  int i,j,k,m;
  int a[N],b[N];
  i=0;
  while(1){
    scanf("%d %d",&j,&k);
    a[i] = j;
    b[i] = k;
    if(j==0 && k==0){
      break;
    }
    i++;
  }
  for(m=0;m<i;m++){
    if(a[m]<b[m]){
      printf("%d %d\n",a[m],b[m]);
    }else{
      printf("%d %d\n",b[m],a[m]);
    }
  }
  return 0;
}