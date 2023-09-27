#include<stdio.h>
int main()
{
  int sen[31],y,i,k,hon,m,h;
  scanf("%d",&hon);
  for(i=1;i<=hon;i++)sen[i]=i;
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d,%d",&m,&h);
    y=sen[m];
    sen[m]=sen[h];
    sen[h]=y;
  }
  for(i=1;i<=hon;i++)printf("%d\n",sen[i]);
  return 0;
}