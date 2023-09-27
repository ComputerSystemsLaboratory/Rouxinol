#include<stdio.h>
int main(void)
{
  int n,i,m,j,k,robo,robox,roboy,sum,l; 
  char news;
  for(;;)
    {
      robox=10;
      roboy=10;
      scanf("%d",&n);
      if(n==0){break;}
      int x[n],y[n],xy[n];
      for(i=0;i<n;i++){xy[i]=0;}
      sum=0;
      for(i=0;i<n;i++){scanf("%d %d",&x[i],&y[i]);}
      scanf("%d",&m);
      for(i=0;i<m;i++)
	{
	  scanf(" %c %d",&news,&robo);
	  for(k=0;k<robo;k++)
	    {
	    if(news=='N'){roboy=roboy+1;}
	    if(news=='W'){robox=robox-1;}
	    if(news=='S'){roboy=roboy-1;}
	    if(news=='E'){robox=robox+1;}
	    for(j=0;j<n;j++){if(x[j]==robox && y[j]==roboy){xy[j]=1;}}
	    }
	}
      for(j=0;j<n;j++){sum=sum+xy[j];}
      if(sum==n){printf("Yes\n");}
      else{printf("No\n");}	
    }
  return 0;
}