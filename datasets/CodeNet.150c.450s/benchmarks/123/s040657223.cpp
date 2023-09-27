#include <stdio.h>
#include <math.h>

int main(){
  int n;
  scanf("%d",&n);
  int i,j,flag=0;
  int a,count=0;
  for(i=0;i<n;i++){
    scanf("%d",&a);
    flag = 0;
    for(j = 2 ;j*j<=a;j++){
      if(a%j==0){
	flag = 1;
	break;
      }
    }
    if(!flag) count++;
  }
  printf("%d\n",count);
   
}
   