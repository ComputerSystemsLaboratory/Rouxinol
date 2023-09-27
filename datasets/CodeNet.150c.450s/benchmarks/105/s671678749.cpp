#include<bits/stdc++.h>

using namespace std;

bool f(vector<long long> a, long long x){
  long long index = 0;
  for(int b = 59; b >= 0; b--){
    long long flag = 0;
    for(long long j = index; j < a.size(); j++){
      if(a[j] & (1ll << b)){
        flag = 1;
        swap(a[j], a[index]);
        break;
      }
    }
    for(long long j = index + 1; j < a.size(); j++){
      if(a[j] & (1ll << b)){
        a[j] ^= a[index];
      }
    }
    if(flag == 1){
      index++;
    }
  }
  
  index = 0;
  for(int b = 59; b >= 0; b--){
    if((1ll << b) & x){
      if(a[index] & (1ll << b)){
        x ^= a[index];
        index++;
      }
    }
    while(index < a.size() && (a[index] & (1ll << b))){
        index++;
    }
    if(x == 0) return true;
    if(index == a.size()) return false;
  }
  return false;
}

int main(){
  int T;
  cin >> T;
  
  while(T--){
    int N;
    cin >> N;
    
    vector<long long> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];
    
    string S;
    cin >> S;
    
    if(S[N - 1] == '1'){
      puts("1");
      continue;
    }
    
    bool zero = true;
    vector<long long> a;
    for(int i = N - 1; i >= 0; i--){
      if(S[i] == '0'){
        a.push_back(A[i]);
      }else{
        if(!f(a, A[i])){
          zero = false;
          break;
        }
      }
    }
    
    if(zero) puts("0");
    else puts("1");
  }
  
  return 0;
}