#include <iostream>
using namespace std;

int max(int a,int b);

int main() {
  int N,W;
  cin >> N >> W;
  int value[N+1],weight[N+1],C[N+1][W+1];
  value[0] = 0; weight[0] = 0;
  for (int i=1;i<N+1;++i) {
    cin >> value[i] >> weight[i];
  }
  for (int i=0;i<=W;++i) {
    C[0][i] = 0;
  }
  for (int i=0;i<=N;++i) {
    C[i][0] = 0;
  }
  for (int i=1;i<=N;++i) {
    for (int j=1;j<=W;++j) {
      int first,second;
      if (j>=weight[i])
	first = C[i-1][j-weight[i]]+value[i];
      else
	first = 0;
      second = C[i-1][j];
      C[i][j] = max(first,second);
    }
  }
  cout << C[N][W] << endl;
}

int max(int a, int b) {
  if (a>b)
    return a;
  else
    return b;
}