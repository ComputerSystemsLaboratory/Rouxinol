#include <stdio.h>
#include <stdlib.h>

int stack[100], sp;
int start[100], end[100];
int ti;

void dfs(int , int **);
void visit(int , int **, int *);
int pop();
void push(int);

int main(){

  int i, j;
  int n, u , k;
  int **a;

  scanf("%d", &n);

  a = (int **)malloc(sizeof(int *) * n);

  for(i = 0; i < n; i++){
    scanf("%d%d", &u, &k);

    a[i] = (int *)malloc(sizeof(int) * k + 1);
    a[i][k] = -1;

    for(j = 0; j < k; j++){
      scanf("%d", &a[i][j]);
    }

  }

  dfs(n, a);

  for(i = 0; i < n; i++){
    printf("%d %d ", i + 1, start[i]);
    printf("%d\n", end[i]);
  }


  return 0;
}

void dfs(int n, int **a){

  int i;
  int color[100];

  for(i = 0; i < n; i++){
    color[i] = 0;
  }

  for(i = 0; i < n; i++){
    if(color[i] == 0) visit(i, a, color);
  }

}

void visit(int u, int **a, int *c){

  int i;
  int v;

  c[u] = 1;
  start[u] = ++ti;

  for(i = 0; a[u][i] != -1; i++){
    v = a[u][i] - 1;
    if(c[v] == 0) visit(v, a, c); 

  }  

  c[u] = 2;
  end[u] = ++ti;

}

int pop(){

  sp--;

  return stack[sp];
}


void push(int d){

  stack[sp] = d;

  sp++;

}