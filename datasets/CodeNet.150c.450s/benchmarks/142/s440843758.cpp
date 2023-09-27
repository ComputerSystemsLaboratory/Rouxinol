#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,K;
  cin >> N >> K;
  vector<int64_t> A(N);
  for(int i=0;i<N;i++){
    cin >> A.at(i);
  }
  for(int i=0;i<N;i++){
    if(i>=K){
      if(A.at(i-K)<A.at(i)){
        cout << "Yes" << endl;
      }else{
        cout << "No" << endl;
      }
    }
  }
  return 0;
}
