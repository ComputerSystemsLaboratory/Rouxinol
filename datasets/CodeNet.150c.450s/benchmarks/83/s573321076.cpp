#include <iostream>
#include <algorithm>
// in a knapsack problem, when the storage is a limited integer,
// it's a good idea to have a 2-d array to store the maximum value.

using namespace std;
int main(){
  int n, weight, i, j;
  cin >> n >> weight;
  int v[n], w[n];
  for (i = 0; i < n; ++i){
    cin >> v[i] >> w[i];
  }
  int maxvalue[n][weight+1];

  for (i = 0; i < n; ++i){
    for (j = 0; j <= weight; ++j){
      maxvalue[i][j] = 0;
    }
  }

  for (i = 0; i < n; ++i){
    for (j = 0; j <= weight; ++j){
      if(i == 0 && j == 0){
        maxvalue[i][j] = 0;
      }else{
        if(i == 0){
          if(j < w[i]){
            maxvalue[i][j] = 0;
          }else{
            maxvalue[i][j] = v[i];
          }
        }else{
          if(j < w[i]){
            maxvalue[i][j] = maxvalue[i-1][j];
          }else{
            maxvalue[i][j] = max(maxvalue[i-1][j], v[i]+maxvalue[i-1][j-w[i]]);
          }         
        }
      }
    }  
  }

  cout << maxvalue[n-1][weight] << endl;

}