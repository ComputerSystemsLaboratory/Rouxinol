#include <string>
#include <utility>
#include <iostream>
 
#define MAX 100

#define INF 100000000

int left[MAX];
int right[MAX];

int DP[MAX][MAX];

int main(){
  int n;
  std::cin >> n;

  for(int i = 0; i < n; i++){
    std::cin >> left[i];
    std::cin >> right[i];
  }
  
  for(int i = 0; i < MAX; i++){
    for(int j = 0; j < MAX; j++){
      DP[i][j] = INF;
   }
  }

  for(int k = 0; k < n; k++){
    for(int l = 0; l + k < n; l++){
      int r = l + k;
      
      if(k == 0){
	DP[l][r] = 0;
      }else if(k == 1){
	DP[l][r] = left[l] * right[l] * right[r];
      }else{
	for(int t = l; t < r; t++){
	 
	  DP[l][r] = std::min(DP[l][r], DP[l][t] + DP[t + 1][r] + left[l] * right[t] * right[r]);
	}

	// printf("%d %d %d\n", l, r, DP[l][r]);
      }
    }
  }
  
  std::cout << DP[0][n - 1] << std::endl;
}