#include <stdio.h>
#define N 100

int main()
{
  int array[N][N];
  int i,j,n,v,w,x,y;

  scanf("%d",&n);

  for(i=0;i<n;i++)
    {
      for(j=0;j<N;j++)
        {
          array[i][j]=0;
        }
    }

  for(i=0;i<n;i++)
    {
      scanf("%d%d",&v,&w);
      v--;
      for(j=0;j<w;j++)
        {
          scanf("%d",&x);
          x--;
          array[v][x]=1;
        }
    }

  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
        {
          if(j) printf(" ");
          printf("%d",array[i][j]);
        }
      printf("\n");
    }
  return 0;
}