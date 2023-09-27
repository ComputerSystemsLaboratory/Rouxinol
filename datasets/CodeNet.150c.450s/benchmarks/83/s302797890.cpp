#include <iostream>
using namespace std;

int Max(int x, int y) {
  if(x > y) return x;
  return y;
}

int Knapsack(int N, int capa, int value[], int weight[]) {
  int table[100][10000][2];
  int max = 0;

  for(int i = 0; i < N; i++) {
    for(int j = 0; j <= capa; j++) {
      if(i == 0) {
        if(j-weight[i] >= 0) {
          table[i][j][0] = value[i];
          table[i][j][1] = weight[i];
        }
        else {
          table[i][j][0] = 0;
          table[i][j][1] = 0;
        }
      }
      else {
        if(j-weight[i] >= 0) {
          int x = table[i-1][j][0];
          int y = table[i-1][j-weight[i]][0]+value[i];
          if(x > y) {
            table[i][j][0] = x;
            table[i][j][1] = table[i-1][j][1];
          }
          else {
            table[i][j][0] = y;
            table[i][j][1] = table[i-1][j-weight[i]][1]+weight[i];
          }
        }
        else {
          table[i][j][0] = table[i-1][j][0];
          table[i][j][1] = table[i-1][j][1];
        }
      }

      if(i == N-1 && table[i][j][1] <= capa && max < table[i][j][0])
        max = table[i][j][0];
    }
  }

  return max;
}

int main() {
  int N, capa;
  int value[100], weight[100];

  cin >> N >> capa;
  for(int i = 0; i < N; i++)
    cin >> value[i] >> weight[i];

  cout << Knapsack(N, capa, value, weight) << endl;

  return 0;
}