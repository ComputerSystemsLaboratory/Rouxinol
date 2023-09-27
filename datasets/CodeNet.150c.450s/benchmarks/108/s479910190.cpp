#include<stdio.h>


#define MAX 101
#define WHITE 2
#define GRAY 1
#define BLACK 0

int col[MAX], d[MAX], a[MAX][MAX]; 
 
int n, h= 0, t = 0;


int Que[MAX];


/*Qの操作*/
 int Dequeque(){
  h++;
  return Que[h - 1];
}
void Enqueque(int b){
  Que[t] = b;
  t++;
}

 
void BFS(int s){
  int i, u;
  for(i = 1; i < n+1; i++){
      col[i] = WHITE;


      d[i] = -1;
  }
  d[s] = 0;
  

  col[s] = GRAY;
  
  Enqueque(s);
 
  while(h != t){
    u = Dequeque();
    for(i = 1; i <= n; i++){
      if((col[i] == WHITE) && (a[u][i] == 1)){


    col[i] = GRAY;
    d[i] = d[u] + 1;
    Enqueque(i);
      }
    }
   

    col[u] = BLACK;
  }
}
 

  
int main(){
 
  scanf("%d", &n);
 
  int i, u, j,y=1,e;



  /*配列の初期化*/
  for(i = 1; i < n+1; i++){
    for(j = 1; j < n+1; j++){
     

 a[i][j] = 0;

    }
  }

  int x; 
  for(i = 1; i < n+1; i++){

    scanf("%d%d",&u,&e);
    for(j = 1; j <= e; j++){
      scanf("%d", &x);
      a[i][x] = 1;
    }
  }
 
  BFS(y);
   
  for(i = 1; i < n+1; i++){
    printf("%d ", i);
    printf("%d\n", d[i]);
  }
  return 0;
}