#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define MAX 1001
void solve(void);
int q,count[MAX][MAX]={},xlength,ylength;
char X[MAX],Y[MAX];

void solve(void){
  int i,j;

  xlength=strlen(X);
  ylength=strlen(Y);
  
  for(i=1;i<=xlength;i++){
    for(j=1;j<=ylength;j++){
      if(X[i-1]==Y[j-1]) count[i][j]=count[i-1][j-1]+1;
      else if(count[i-1][j]>=count[i][j-1]) count[i][j]=count[i-1][j];
      else count[i][j]=count[i][j-1];
    }
  }
}
    
int main()
{
  int i;
  
  scanf("%d",&q);

  for(i=1;i<=q;i++){
    scanf("%s",X);
    scanf("%s",Y);
    solve();
    printf("%d\n",count[xlength][ylength]);
  }

  /*for(i=0;i<q;i++){
    printf("%d\n",count[][]);
    }*/

  return 0;
}