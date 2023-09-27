#include<stdio.h>
int main()
{
	int a[101][101]={0};
    int r,c;
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++)
    {
    	for(int j=0;j<c;j++)
    	{
    		scanf("%d",&a[i][j]);
    	}
    }
     for(int i=0;i<r;i++)
     {
  	   for(int j=0;j<c;j++)
  	   {
  		 a[i][c]=a[i][c]+a[i][j];
  	   }
     }
  for(int j=0;j<=c;j++)
  {
  	for(int i=0;i<r;i++)
  	{
  		a[r][j]=a[r][j]+a[i][j];
  	}
  }
  
  for(int i=0;i<=r;i++)
  {
  	for(int j=0;j<=c;j++)
  	{
  		printf("%d",a[i][j]);
  		if(j!=c) printf(" ");
  	}
  	printf("\n");
  }
    return 0;
}