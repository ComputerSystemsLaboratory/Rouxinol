#include <iostream>
#include <vector>
using namespace std;

int main(void){
  const int V = 10, W = 100, C = 10;
  // dp[i][j][k]: ??¢?????????i?????§??§???k????????¢?????????????????£????????????????¨????j??????????????????????????????????????°
  vector<vector<vector<int> > > dp(V, vector<vector<int> >(W + 1, vector<int>(C + 1, 0)));
  dp[0][0][1] = 1;
  for(int i = 1; i < V; i++){
    
    for(int j = 0; j < i; j++){
      for(int k = 0; k <= C; k++){
        dp[i][j][k] = dp[i - 1][j][k];
      }
    }
    
    //printf("%d\n", i);

    //printf("     ");
    for(int k = 1; k <= C; k++){
      //printf(" %d ", k);
    }
    //printf("\n");
    
    for(int j = i; j <= W; j++){
      //printf("%3d: ", j);
      for(int k = 1; k <= C; k++){
        dp[i][j][k] = dp[i - 1][j][k] + dp[i - 1][j - i][k - 1];
        if(j == i && k == 1){ ++dp[i][j][k]; }
        //printf("[%d]", dp[i][j][k]);
      }
      //printf("\n");
    }
    //printf("\n\n");
  }

  /*
  printf("%d\n", V - 1);
  for(int j = 0; j <= W; j++){
    printf("%3d: ", j);
    for(int k = 0; k <= C; k++){
      printf("[%d]", dp[V - 1][j][k]);
    }
    printf("\n");
  }
  printf("\n");
  */

  while(true){
    int n, s;
    cin >> n >> s;
    if(n == 0 && s == 0){ break; }
    cout << dp[V - 1][s][n] << endl;
  }
  
  return 0;
}