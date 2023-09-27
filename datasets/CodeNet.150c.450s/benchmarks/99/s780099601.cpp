#include <bits/stdc++.h>
using namespace std;
int value(string S){
  int N = S.size();
  int num = 1;
  int ans = 0;
  for (int i = 0; i < N; i++){
    if (isdigit(S[i])){
      num = S[i] - '0';
    } else {
      if (S[i] == 'm'){
        ans += num * 1000;
      }
      if (S[i] == 'c'){
        ans += num * 100;
      }
      if (S[i] == 'x'){
        ans += num * 10;
      }
      if (S[i] == 'i'){
        ans += num * 1;
      }
      num = 1;
    }
  }
  return ans;
}
string mcxi(int x){
  string S1 = to_string(x);
  while (S1.size() < 4){
    S1 = '0' + S1;
  }
  string S2 = "mcxi";
  string S;
  for (int i = 0; i < 4; i++){
    S += S1[i];
    S += S2[i];
  }
  string ans;
  for (int i = 0; i < 8; i++){
    if (S[i] == '0'){
      i++;
    } else if (S[i] != '1'){
      ans += S[i];
    }
  }
  return ans;
}
int main(){
  int n;
  cin >> n;
  for (int i = 0; i < n; i++){
    string S, T;
    cin >> S >> T;
    cout << mcxi(value(S) + value(T)) << endl;
  }
}
