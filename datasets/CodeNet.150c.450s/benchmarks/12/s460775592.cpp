#include <bits/stdc++.h>
using namespace std;
int main(){
  int H;
  cin >> H;
  vector<int> A(H);
  for (int i = 0; i < H; i++){
    cin >> A[i];
  }
  for (int i = 0; i < H; i++){
    cout << "node " << i + 1 << ": ";
    cout << "key = " << A[i] << ", ";
    if (i > 0){
      cout << "parent key = " << A[(i - 1) / 2] << ", ";
    }
    if ((i * 2 + 1) < H){
      cout << "left key = " << A[i * 2 + 1] << ", ";
    }
    if ((i * 2 + 2) < H){
      cout << "right key = " << A[i * 2 + 2] << ", ";
    }
    cout << endl;
  }
}
