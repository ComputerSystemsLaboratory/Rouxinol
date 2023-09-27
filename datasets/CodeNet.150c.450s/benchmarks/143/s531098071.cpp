#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  unsigned long long int ans = 0;
  cin >> N;
  
  vector<int> num(100001, 0);
  for (int i = 0; i < N; i++){
    int A;
    cin >> A;
    
    ans += A;
    num.at(A)++;
  }
  
  int Q;
  cin >> Q;
  
  for (int i = 0; i < Q; i++){
    int B, C;
    cin >> B >> C;
    
    ans += (C - B) * num.at(B);
    num.at(C) += num.at(B);
    num.at(B) = 0;
    
    cout << ans << endl;
  }
  
}