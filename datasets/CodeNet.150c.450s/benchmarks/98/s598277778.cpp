#include <stdio.h>

int main(void)
{
  int x, y, i, j;
  int hanako[101],taro[101],hsum,tsum, min = 1000, anstaro, anshanako;

  while(1){
    scanf("%d %d",&x, &y);
    hsum = 0;
    tsum = 0;
    min = 1000;
    if(x == 0 && y == 0){
      break;
    }
    tsum = 0;
    for(i = 0 ; i < x ; i++){
      scanf("%d",&taro[i]);
      tsum += taro[i];
    }
    for(i = 0 ; i < y ; i++){
      scanf("%d",&hanako[i]);
      hsum += hanako[i];
    }

    for(i = 0 ; i < x ; i++){
      for(j = 0 ; j < y ; j++){
	if(tsum - taro[i] + hanako[j] == hsum - hanako[j] + taro[i]){
	  if(taro[i]+hanako[j] < min){
	    min = taro[i] + hanako[j];
	    anstaro = taro[i];
	    anshanako = hanako[j];
	  }
	}
      }
    }
    if(min == 1000){
      printf("-1\n");
    }
    else{
      printf("%d %d\n",anstaro,anshanako);
    }
  }
  return 0;
}