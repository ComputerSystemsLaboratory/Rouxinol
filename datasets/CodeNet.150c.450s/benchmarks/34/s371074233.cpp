#include <stdio.h>

int stair(int x) {

  if(x==1) return 1;

  else if(x==2) return 2;

  else if(x==3) return 4;

  else return stair(x-1)+stair(x-2)+stair(x-3);

}

int main(void) {

  int n;

  int step;
  int day,year;


  while(1) {

    scanf("%d",&n);

    if(n==0) break;

    step=stair(n);

    if(step%10==0) day=step/10;

    else day=step/10+1;

    if(day%365==0) year=day/365;

    else year=day/365+1;

    printf("%d\n",year);

  }

  return 0;

}