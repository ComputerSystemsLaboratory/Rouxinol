#include <iostream>
#include <vector>
using namespace std;
int INF = 100000000;
int main(){
  int n, M = 1000000;
  vector<int> A(M,INF), A_odd(M,INF);
  int t = 1, k = 3;
  A[0] = 0;
  A_odd[0] = 0;
  while(t < 1000000){
    for(int k = 0; k+t < M; ++k){
      A[k+t] = min(A[k]+1,A[k+t]);
      if(t%2) A_odd[k+t] = min(A_odd[k]+1,A_odd[k+t]);
    }
    ++k;
    t *= k;
    t /= (k-3);
  }
  while(cin >> n, n){
    cout << A[n] << " " << A_odd[n] << endl;
  }
  return 0;
}