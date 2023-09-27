#include <stdio.h>
#include <string.h>

#define M 1001

int n;

char x[M],y[M];
 
void lcs(void){
  int i,j;
  int len_x, len_y,graph[M][M];

  len_x=strlen(x);
  len_y=strlen(y);
  for(i=1;i<M;i++){
    for(j=1;j<M;j++){
      graph[i][j]=0;
    }
  }
  for(i=1;i<=len_x;i++){
    for(j=1;j<=len_y;j++){
      if(x[i-1]==y[j-1]) graph[i][j]=graph[i-1][j-1]+1;

      else{
        if(graph[i-1][j]>=graph[i][j-1]) graph[i][j]=graph[i-1][j];
        else graph[i][j]=graph[i][j-1];
      }
    }
  }
  printf("%d\n",graph[len_x][len_y]);
}
     
int main()
{
  int i;
   
  scanf("%d",&n);
 
  for(i=0;i<n;i++){
    scanf("%s",x);
    scanf("%s",y);
    lcs();
  }
  return 0;
}