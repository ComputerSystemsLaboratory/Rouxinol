#include<stdio.h>
int main(){
  int a,b,j,ab,total=1;
  while(scanf("%d %d",&a,&b)!=EOF){
    ab=a+b;
    total=1;
    int i=10;
    for(j=0;j<6;j++){
      if(ab/i>=1){
	total++;
      }
      i=10*i;
    }
    printf("%d\n",total);
  }
  return(0);
}