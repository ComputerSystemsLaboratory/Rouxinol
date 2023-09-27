#include<stdio.h>
#define MAX 102
#define WHITE 0
#define BLACK 1
#define GRAY 2


void init();
void visit(int);

int col[MAX];
int n, t = 0;
int d[MAX],f[MAX],edge[MAX],num[MAX][MAX],G[MAX][MAX];

void init(){

  int i,j;

  for(i = 0; i <= n; i++){
      col[i] = WHITE;
    }

}

void dFSearch(){
  int i;
  for(i = 1; i <= n; i++){
    if(col[i] == WHITE) visit(i);
  }
}

void visit(int u){
  int i,j;

  col[u] = GRAY;
  t += 1;
  d[u] = t;

  for(j = 0; j < n; j++){
    if(G[u][j] == 10) {
      if(col[j+1] == WHITE ){
    visit(j+1);
      }
    }
  }

  col[u] = BLACK;
  t = t + 1;
  f[u] = t;

}


int main(){

  int i,j,k = 0,vertex,number;

  scanf("%d\n",&n);
  init();

  for(i = 1; i <= n; i++){
    scanf("%d %d",&vertex,&edge[i]);
    for(j = 1; j <= edge[i]; j++){
      scanf("%d",&number);
      G[vertex][number-1] = 10;
    }
    scanf("\n");
  }

 dFSearch();

  for(i = 1; i <= n; i++){
    printf("%d %d %d\n", i, d[i], f[i]);
  }

  return 0;


}