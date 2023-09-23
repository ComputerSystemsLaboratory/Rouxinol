#include <stdio.h>
int main()
{
  int i,w;
  long long debt=100000;
  scanf("%d",&w);
  for(i=0;i<w;i++){
    debt*=1.05;
    if(debt%1000!=0)debt=debt+1000-debt%1000;
  }
  printf("%lld\n",debt);
  return 0;
}