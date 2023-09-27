#include<stdio.h>
 
#define MAX 101
#define BLACK 0
#define WHITE 2
#define GRAY 1


int f[MAX];
int c=0;
int col[MAX];
int depth[MAX];



int dfs[MAX][MAX];
int k[MAX];



void dfsvisit(int u)
{
  int i;
  col[u] = GRAY;
 


depth[u] =  c++;
  for(i = 0;i < k[u]; i++)
    {
      if(col[dfs[u][i]] == WHITE)
    {
     

      dfsvisit(dfs[u][i]);
   

    }
    }
  col[u] = BLACK;
  f[u] = c++;
}

 







int main(){
int n,i=0;
  
 
 
  for(i=0;i<101;i++)
    {
      col[i] = WHITE;
} 




int j;
int tmp;
 
  scanf("%d",&n);
 
  for(i=1;i<=n;i++)
    {
      scanf("%d",&tmp);

      scanf("%d",&k[i]);

      for(j = 0;j < k[i]; j++)
    {
      scanf("%d",&dfs[i][j]);
    }
    }
  
  for(i = 1;i <= n; i++){
      if(col[i] == WHITE){
     

dfsvisit(i);
    }
    }
  for(j = 1;j <= n; j++)
    {
      /*出力が合わないので補正*/
      printf("%d %d %d\n",j,depth[j]+1,f[j]+1);
    }
 
  return 0;
}
 