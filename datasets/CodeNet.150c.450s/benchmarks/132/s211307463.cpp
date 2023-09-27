#include <stdio.h>
int main()
{
  int t[50],n,s,storn,i,j;
  while(1){
    scanf("%d %d",&n,&storn);
    //printf("%d %d",n,storn);///
    if(n==0&&storn==0)break;
    for(i=0;i<n;i++)t[i]=0;
    j=0;
    s=storn;
    while(1){
      //printf("%d %d %d %d\n",j,s,t[j],storn);///
      if(s!=0){
	t[j]++;
	s--;
      }else if(s==0){
	s=t[j];
	t[j]=0;
      }
      if(t[j]==storn)break;
      j++;
      if(j==n)j=0;
    }
    printf("%d\n",j);
  }
  return 0;
}