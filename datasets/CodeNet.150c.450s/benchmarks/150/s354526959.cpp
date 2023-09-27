#include<iostream>
#include<vector>

using namespace std;

const int MAX = 2000001;
const int VMAX = 10001;

int main(){
  int N;
  cin >> N;

  vector <int> A(N + 1), B(N + 1), C(VMAX + 1, 0);

  for(int i = 1; i <= N; i++) {
    cin >> A[i];
  }
  for(int j = 1; j <= N ; j++){
    C[A[j]] = C[A[j]] + 1;
  }
  for(int i = 1; i <= VMAX; i++){
    C[i] = C[i] + C[i-1];
  }

  for(int j = N; j >= 1; j--){
    B[C[A[j]]] = A[j];
    C[A[j]] = C[A[j]] - 1;
  }

  for(int i = 1 ; i <= N; i++){
    if (i > 1) {
      cout << " ";
    }
    cout << B[i];
  }
  cout << endl;
}
