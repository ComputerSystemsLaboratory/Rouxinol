#include <stdio.h>

struct data {int y,m,d;} table[100],*d;

int main(){
  int n,i,j,date;
  scanf("%d",&n );
  for(i=0; i<n; i++) {
    d=&table[i];
    scanf("%d%d%d",&d->y,&d->m,&d->d);
  }

  for(i=0; i<n; i++) {
    d=&table[i];
    date=0;
    for(j=d->m;j<=10;j++){
      if(j==d->m){
        if(d->y%3==0||j%2==1)date+=20-d->d+1;
        else date+=19-d->d+1;
      }else{
        if(d->y%3==0||j%2==1)date+=20;
        else date+=19;
      }
    }
    for(j=d->y+1;j<1000;j++){
      if(j%3==0)date+=20*10;
      else date+=19*5+20*5;
    }
    printf("%d\n",date );
  }

  }