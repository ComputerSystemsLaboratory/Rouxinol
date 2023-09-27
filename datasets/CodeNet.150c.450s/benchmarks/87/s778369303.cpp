#include <bits/stdc++.h>
using namespace std;
int main(){
  while (1){
    int H;
    cin >> H;
    if (H == 0){
      break;
    }
    vector<vector<int>> A(H, vector<int>(7, -1));
    for (int i = 0; i < H; i++){
      for (int j = 1; j <= 5; j++){
        cin >> A[i][j];
      }
    }
    int ans = 0;
    while (1){
      bool update = false;
      for (int i = 0; i < H; i++){
        if (A[i][3] != 0){
          int L = 3;
          while (A[i][L] == A[i][3]){
            L--;
          }
          int R = 3;
          while (A[i][R] == A[i][3]){
            R++;
          }
          if (R - L >= 4){
            for (int j = L + 1; j <= R - 1; j++){
              ans += A[i][j];
              A[i][j] = 0;
              update = true;
            }
          }
        }
      }
      if (!update){
        break;
      }
      for (int i = 1; i <= 5; i++){
        for (int j = H - 2; j >= 0; j--){
          if (A[j][i] != 0){
            int p = j;
            while (A[p + 1][i] == 0){
              swap(A[p][i], A[p + 1][i]);
              p++;
              if (p == H - 1){
                break;
              }
            }
          }
        }
      }
    }
    cout << ans << endl;
  }
}
