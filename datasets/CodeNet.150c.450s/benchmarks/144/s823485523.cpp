#include <iostream>
#include <cstring>
using namespace std;

int main() {
  int N, M, L; cin >> N >> M >> L;
  long long matA[N][M], matB[M][L], matC[N][L];
  memset(matC, 0, sizeof matC);
  for(int i=0; i<N; i++)
    for(int j=0; j<M; j++)
      cin >> matA[i][j];
  for(int i=0; i<M; i++)
    for(int j=0; j<L; j++)
      cin >> matB[i][j];
  for(int i=0; i<N; i++)
    for(int j=0; j<M; j++)
      for(int k=0; k<L; k++)
        matC[i][k] += matA[i][j]*matB[j][k];
  for(int i=0; i<N; i++) {
    for(int j=0; j<L; j++) {
      if(j) cout << " ";
      cout << matC[i][j];
    }
    cout << endl;
  }
  return 0;
}