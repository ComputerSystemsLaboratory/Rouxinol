#include<stdio.h>
int main()
{
  int sum,y,m,d,i,a,j;
  scanf("%d",&a);
  for(i=0;i<a;i++){
    //printf("%d %d\n",a,i);///
    scanf("%d %d %d",&y,&m,&d);
    sum=0;
    for(j=y+1;j<1000;j++){
      if(j%3==0)sum+=200;
      else sum+=195;
    }
    if(y%3!=0){
      for(j=m+1;j<11;j++){
	if(j%2==0)sum+=19;
	else sum+=20;
      }
      if(m%2==0)sum+=19-d+1;
      else sum+=20-d+1;
    }else{
      for(j=m+1;j<11;j++)sum+=20;
      sum+=20-d+1;
    }
    printf("%d\n",sum);
  }
  return 0;
}