#include <iostream>
#include <vector>
using namespace std;

int Sum(const int* X, int size) {
  int sum = 0;
  for(int i = 0; i < size; i++) {
    sum += X[i];
  }
  return sum;
}

int Devide(int d, const int *X, int M) {
  if(X[M] != 0) 
    return (int)(d / X[M]);
  else
    return 0;
}

int main() {
  int N; //競技者の数
  int M; //優勝者の番号
  int P; //控除率(百分率)
  vector<int> X;
  int deduction;

  while(1) {
    cin >> N >> M >> P;
    if(N == 0 && M == 0 && P == 0)
      break;
      
    for(int i = 0; i < N; i++) {
      int x;
      cin >> x;
      X.push_back(x);
    }
    
    deduction = Sum(&X.front(), X.size()) * (100-P);
    cout << Devide(deduction, &X.front(), M-1) << endl;
    X.clear();
  }

}

