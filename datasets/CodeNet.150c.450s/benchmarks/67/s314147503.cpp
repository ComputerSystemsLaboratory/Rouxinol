#include <stdio.h>
int main()
{
  int cou,a,i;
  while(1){
    scanf("%d",&a);
    if(a==0)break;
    cou=0;
    for(i=2;i<=a/2+1;i++){
      if(i%2==0&&a%i==0)continue;
      if(i%2==0&&((a*1000000)/i)%1000000==500000&a/i>=i/2){
	cou++;
	//printf("%d\n",i);
      }
      if(i%2!=0&&a%i==0&&a/i>=i/2+1){
	cou++;
	//printf("%d\n",i);
      }
      if(i%2!=0&&a%i!=0)continue;
    }
    printf("%d\n",cou);
  }
  return 0;
}