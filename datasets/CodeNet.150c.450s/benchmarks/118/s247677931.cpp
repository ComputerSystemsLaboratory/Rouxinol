#include <stdio.h>

int calc(int y,int m,int d){

  int i,yd,md;
  
  yd = (y-1)*195 + (y-1)/3*5;
 
 if(y%3==0)
   md = 20*(m-1);
 else{
   if (m%2==1) md = (m/2)*39;
   else md = 20 + ((m/2)-1)*39;
}
 
 return (yd + md + d);
}

int main(void){

  int aniv;
  int n;
  int y,m,d;
  int day[100];
  int i;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d %d %d",&y,&m,&d);
    day[i] = calc (1000,1,1) - calc(y,m,d);
  }

  for(i=0;i<n;i++)
    printf("%d\n",day[i]);

  return 0;
}