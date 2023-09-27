#include<iostream>
#include<algorithm>
using namespace std;

#define INF (100 * 100 * 100 * 100)

int n;
int m[110][110]; //minimum cost multiply matrixes from i to j

void matrixChainOrder(int *p){
  for(int i = 1;i <= n;i++) m[i][i] = 0;
  
  for(int l = 2;l <= n;l++){
    for(int i = 1;i <= n - l + 1;i++){
      int j = i + l - 1;
      m[i][j] = INF;
      //search the minimun cost multiply matrixes from i to j
      for(int k = i;k <= j - 1;k++){
        int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
        m[i][j] = min(m[i][j], q);
      }
    }
  }
}

int main(){
  
  int p[110];

  //input
  cin >> n;
  
  for(int i = 0;i < n;i++){
    int r, c;

    //p[0] is the number of first matrix's row
    //p[i] is the number of matrixs' column
    cin >> r >> c;
    if(i) p[i + 1] = c;
    else{
      p[0] = r;
      p[1] = c;
    }
  }
  
  matrixChainOrder(p);

  //output
  cout << m[1][n] << endl;
  
  return 0;
}


