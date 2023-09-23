#include <iostream>
using namespace std;
int main(void){
  for(;;){
    int N, M, P;
    cin >> N >> M >> P;
    if(N == 0 && M == 0 && P == 0){
      return 0;
    }
    int X[N];
    for(int i = 0 ; i < N ; i++){
      cin >> X[i];
    }
    int sum = 0;
    for(int i = 0 ; i < N ; i++){
      sum += 100 * X[i];
    }
    sum = sum * (100 - P) / 100;
    if(X[M-1] > 0){ cout << sum / X[M-1] << endl;}else{ cout << 0 << endl;}
  }
}

