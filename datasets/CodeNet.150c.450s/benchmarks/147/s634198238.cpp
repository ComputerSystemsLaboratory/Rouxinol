#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int>vec(100000,0);
  for(int i=1; i<=99; ++i){
    for(int j=1; j<=99; ++j){
      for(int k=1; k<=99; ++k){
        vec[i*i + j*j + k*k + i*j + j*k + k*i]++;
      }
    }
  }
  for(int i=1; i<=N; i++){
    cout << vec[i] << endl;
  }
}
