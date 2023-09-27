#include <iostream>
#include <vector>
using namespace std;
int INF = 100000000;
int main(){
  int n, M = 1000000;
  vector<int> T, T_odd, A(M,INF), odd(M,INF);
  int t = 1, k = 3;
  A[0] = 0;
  odd[0] = 0;
  T.push_back(1);
  T_odd.push_back(1);
  while(t < 1000000){
    T.push_back(t);
    if (t%2) T_odd.push_back(t);
    ++k;
    t *= k;
    t /= (k-3);
  }
  odd.push_back(M);
  for(int i = 0; i < T.size(); ++i){
    for(int j = 1; j <= 5; ++j){
      for(int k = 0; k+T[i]*j < M; ++k){
	A[k+T[i]*j] = min(A[k+T[i]*j],A[k]+j);
      }
    }
  }
  for(int i = 0; i < T_odd.size()-1; ++i){
    for(int j = 1; j < 10; ++j){
      for(int k = 0; k+T_odd[i]*j < M; ++k){
	odd[k+T_odd[i]*j] = min(odd[k+T_odd[i]*j],odd[k]+j);
      }
    }
  }
  while(cin >> n, n){
    cout << A[n] << " " << odd[n] << endl;
  }
  return 0;
}