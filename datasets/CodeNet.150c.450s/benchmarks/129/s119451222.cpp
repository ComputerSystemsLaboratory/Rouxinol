#include <stdio.h>
int main (){
  int r,c,i,i2,i3,a,b,d,total;
  int chart[102][102]={{}};
  int  sumhor[102]={};
  int  sumvir[102]={};
  b=0;
  
  scanf("%d%d",&r,&c);
  for(i=1;i<=r;i++){
    for(i2=1;i2<=c;i2++){
      scanf("%d",&a);
      chart[i][i2]=a;
      sumhor[i]+=a;
    }
    b+=sumhor[i];
  }

  for(i2=1;i2<=c;i2++){
    for(i=1;i<=r;i++){
      sumvir[i2]+=chart[i][i2];
    }
  }

  for(i=1;i<=r;i++){
    for(i2=1;i2<=c+1;i2++){
      if(i2<=c)   {printf("%d ",chart[i][i2]);}
      if(i2==c+1) {printf("%d\n",sumhor[i]);}
    }
  

    if(i==r) {
      for(i2=1;i2<=c;i2++){
	printf("%d ",sumvir[i2]);
      }
    }
     
  }
  printf("%d\n",b);

  return 0;
}