#include <bits/stdc++.h>
using namespace std;
int main(){
  string S;
  cin >> S;
  vector<int> H(S.size() + 1, 0);
  for (int i = 0; i < S.size(); i++){
    if (S[i] == '/'){
      H[i + 1] = H[i] + 1;
    } else if (S[i] == '_'){
      H[i + 1] = H[i];
    } else {
      H[i + 1] = H[i] - 1;
    }
  }
  vector<int> l(S.size() + 1, 0);
  l[0] = H[0];
  for (int i = 0; i < S.size(); i++){
    l[i + 1] = max(l[i], H[i + 1]);
  }
  vector<int> r(S.size() + 1, 0);
  r[S.size()] = H[S.size()];
  for (int i = S.size() - 1; i >= 0; i--){
    r[i] = max(r[i + 1], H[i]);
  }
  vector<int> F(S.size() + 1, 0);
  for (int i = 0; i <= S.size(); i++){
    F[i] = min(l[i], r[i]);
  }
  vector<int> W(S.size(), 0);
  for (int i = 0; i < S.size(); i++){
    W[i] = (F[i] - H[i]) + (F[i + 1] - H[i + 1]);
  }
  int A = 0;
  for (int i = 0; i < S.size(); i++){
    A += W[i];
  }
  A /= 2;
  cout << A << endl;
  int k = 0;
  for (int i = 0; i < S.size(); i++){
    if (W[i] == 1){
      k++;
    }
  }
  k /= 2;
  cout << k;
  if (k > 0){
    vector<int> L(k);
    int f = 0;
    for (int i = 0; i < S.size(); i++){
      L[f] += W[i];
      if (S[i] == '/' && W[i] == 1){
        f++;
      }
    }
    for (int i = 0; i < k; i++){
      cout << ' ' << L[i] / 2;
    }
  }
  cout << endl;
}
