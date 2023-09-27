#include <bits/stdc++.h>
using namespace std;

#define N_MAX 100

int M[N_MAX][N_MAX];
int d[N_MAX];
bool is_belong_to_sssp[N_MAX];

int main(){

  int n;
  scanf("%d", &n);

  //initialize
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      M[i][j] = INT_MAX;
    }
  }

  // read weigts
  for(int i=0; i<n; i++){
    int u, k;
    scanf("%d %d", &u, &k);
    for(int j=0; j<k; j++){
      int v,c;
      scanf("%d %d", &v, &c);
      M[u][v] = c;
    }
  }

  // initialize cost
  d[0] = 0;
  is_belong_to_sssp[0] = false;
  for(int i=1; i<n; i++){
    d[i] = INT_MAX;
    is_belong_to_sssp[i] = false;
  }

  //dijkstra's algorithm
  for(int i=0; i<n; i++){
    // select node u in V-S that has minimum cost
    int min_cost = INT_MAX;
    int u = 1;
    for(int j=0; j<n; j++){
      if(!is_belong_to_sssp[j] && d[j] < min_cost){
        u = j;
        min_cost = d[j];
      }
    }

    // add u to is_belong_to_sssp
    is_belong_to_sssp[u] = true;

    // update node in V-S and adjacent to u
    for(int v=0; v<n; v++){
      if(!is_belong_to_sssp[v] && M[u][v] != INT_MAX){
        if(d[u] + M[u][v] < d[v]){
          d[v] = d[u] + M[u][v];
        }
      }
    }
  }

  // output
  for(int i=0; i<n; i++){
    printf("%d %d\n", i, d[i]);
  }

  return 0;
}

