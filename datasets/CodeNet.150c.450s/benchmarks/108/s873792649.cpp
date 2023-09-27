#include<bits/stdc++.h>
using namespace std;

#define MAX 100
#define NIL -2

int n, G_list[MAX+1];
int G[MAX+1][MAX+1];
int d[MAX+1][2];

void init(void){
  for(int i=0; i<=MAX; i++){
    d[i][0]=-1;
  }
}

void make_graph(void){
  scanf("%d", &n);

  for(int i=0; i<n; i++){
    int cnt, num, m;

    scanf("%d %d", &num, &cnt);
    G_list[i]=num;

    for(int j=0; j<cnt; j++){
      scanf("%d", &m);
      G[num][m]=1;
    }
  }
}

void check_depth(void){
  queue<int> Q;
  Q.push(G_list[0]);
  d[G_list[0]][0]=0;
  d[G_list[0]][1]=NIL;
  
  while(!Q.empty()){
    int top=Q.front();
    Q.pop();
    
    for(int j=0; j<n; j++){
      if(G[top][G_list[j]] == 1 && d[G_list[j]][1] != NIL){
	d[G_list[j]][0]=d[top][0]+1;
	d[G_list[j]][1]=NIL;
	Q.push(G_list[j]);
      }
    }
  }
}

void print(void){

  for(int i=0; i<n; i++){
    printf("%d %d\n", G_list[i], d[G_list[i]][0]);
  }
}

int main(void){

  init();
  make_graph();
  check_depth();
  print();
  
  return 0;
}

