#include<stdio.h>
#include<math.h>

int main(){
  int n[1000000]={0};
  int i,j;

  for(i=2;i<=999999;i++){
    for(j=2;j<=(int)sqrt((double)i);j++){
      if(i%j == 0)
	break;
      if(j==(int)sqrt((double)i) && i%j!=0)
	n[i]=1;
    }
  }

  n[2]=1;
  n[3]=1;

  int k,l;
  while(scanf("%d", &k) != EOF){
    int m=0;
    for(l=2;l<=k;l++){
      if(n[l]==1)
	m++;
    }
    printf("%d\n",m);
  }
  return 0;
}