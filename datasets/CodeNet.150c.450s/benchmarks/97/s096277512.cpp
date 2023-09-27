#include <stdio.h>
int main()
{
  int a,i,k[205][2],xmax,xmin,ymax,ymin,b,c;
  while(1){
    scanf("%d",&a);
    if(a==0)break;
    if(a==1){
      printf("1 1\n");
      continue;
    }
    for(i=0;i<a;i++){
      k[i][0]=0;
      k[i][1]=0;
    }
    xmin=0;
    xmax=0;
    ymin=0;
    ymax=0;
    for(i=1;i<a;i++){
      scanf("%d %d",&b,&c);
      k[i][0]=k[b][0];
      k[i][1]=k[b][1];
      if(c==0)k[i][1]--;
      else if(c==1)k[i][0]--;
      else if(c==2)k[i][1]++;
      else if(c==3)k[i][0]++;
      //printf("%d %d ",k[i][0],k[i][1]);///
      if(k[i][0]>xmax)xmax=k[i][0];
      else if(k[i][1]>ymax)ymax=k[i][1];
      else if(k[i][0]<xmin)xmin=k[i][0];
      else if(k[i][1]<ymin)ymin=k[i][1];
      //printf("%d %d %d %d\n",xmax,xmin,ymax,ymin);///
    }
    printf("%d %d\n",ymax-ymin+1,xmax-xmin+1);
  }
  return 0;
}