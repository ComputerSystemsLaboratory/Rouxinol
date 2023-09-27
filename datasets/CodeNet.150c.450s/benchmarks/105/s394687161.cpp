#include <iostream>
#include <vector>
#include <set>
using namespace std;

template<typename T>
void chmin(T& a, T b){
  a = min(a,b);
}

void solve(){
  int N;
  cin >> N;
  vector<long long> A(N);
  for(int i = 0; i < N; ++i){
    cin >> A[i];
  }
  string S;
  cin >> S;
  // S の最後が '1' で，A.back() != 0 -> 1
  // A.back() == 0 だったら勝敗はそこで変わらないので，N = N-1 としても変わらない
  // S.back() == '0' and A.back() != 0 -> ?

  vector<long long> base;
  for(int i = N-1; i >= 0; --i){
    long long e = A[i];
    if(S[i] == '0'){
      for(auto b : base)
        chmin(e, e^b);
      if(e)
        base.push_back(e);
    }else{
      vector<long long> base_;
      for(auto b : base){
        if((e^b) < e){
          e ^= b;
        }else{
          base_.push_back(b);
        }
      }
      if(e != 0){
        puts("1");
        return;
      }
      base_.push_back(A[i]);
    }
    // cerr << "base : ";
    // for(auto e : base){
    //   cerr << e << " ";
    // }
    // cerr << endl;
    if(base.empty()){
      puts("1");
      return;
    }
  }
  if(base.size()) puts("0");
  else puts("1");
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
}
