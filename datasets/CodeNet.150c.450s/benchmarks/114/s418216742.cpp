#include<stdio.h>

#define INFTY 10000
#define black 2
#define gray 1
#define white 0
#define MAX 100

int n,A[MAX][MAX];

int prim()
{
  int i,v,u,min_v;
  int a[MAX],b[MAX],IRO[MAX];

  for(i=0;i<n;i++)
    {
      a[i] = INFTY;
      b[i] = -1;
      IRO[i] = white;
    }

  a[0] = 0;

  while(1)
    {
      min_v = INFTY;
      u = -1;
      for(i=0;i<n;i++)
	{
	  if(min_v > a[i] && IRO[i] != black)
	    {
	      u = i;
	      min_v = a[i];
	    }
	}
      if(u==-1) break;
      IRO[u] = black;
      for(v=0;v<n;v++)
	{
	  if(IRO[v] != black && A[u][v] != INFTY)
	    {
	      if(a[v]>A[u][v])
		{
		  a[v]=A[u][v];
		  b[v] = u;
		  IRO[v] = gray;
		}
	    }
	}
    }
  int sum =0;

  for(i=0;i<n;i++)
    {
      if(b[i] != -1) sum += A[i][b[i]];
    }

  return sum;
}

int main()
{
  int e,i,j;
  scanf("%d",&n);

  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
	{
	  scanf("%d",&e);
	  A[i][j] = (e==-1) ? INFTY : e;
	}
    }
  printf("%d\n",prim());


  return 0;
}
  
      

