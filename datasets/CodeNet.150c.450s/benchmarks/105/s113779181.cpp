#include<bits/stdc++.h>
using namespace std;

long long siz(long long A) {
  long long n2 = 1;
  long long rep = 0;
  while (A >= n2) {
    rep++;
    n2 *= 2;
  }
  return rep;
}

int main() {
  long long T,N;
  string S;
  cin >> T;
  
  long long now,Ac,Ac2;
  
  bool pppp;
  
  for (int p=0; p<T; p++) {
    pppp = true;
    cin >> N;
    vector<long long> A(N);
    for (int i=0; i<N; i++) {
      cin >> A[i];
    }
    cin >> S;
    vector<queue<long long>> Qs(70);
    for (int i=N-1; i>=0; i--) {
      if (S[i] == '0') {
        Ac = A[i];
        now = siz(Ac);
        while (now > 0) {
          Qs[now].push(Ac);
          Ac2 = Qs[now].front();
          Ac = (Ac) ^ (Ac2);
          now = siz(Ac);
        }
      }
      else {
        Ac = A[i];
        now = siz(Ac);
        while (now > 0) {
          if (Qs[now].empty()) {
            pppp = false;
            cout << 1 << endl;
            break;
          }
          Ac2 = Qs[now].front();
          Ac = (Ac) ^ (Ac2);
          now = siz(Ac);
        }
        if (!pppp) break;
        
      }
    }
    if (!pppp) continue;
    cout << 0 << endl;
  }
  
}