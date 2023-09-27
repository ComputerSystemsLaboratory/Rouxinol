#include<iostream>
#include<vector>
#include<map>
using namespace std;
using ll = long long;

int main() {
  ll N,Q,S=0,i;
  cin>>N;
  vector<ll> A(N);
  map<ll,ll> AC;
  for (i=0;i<N;i++) {
    cin>>A[i];
    if (AC.count(A[i])) {
      AC[A[i]]++;
    } else {
      AC[A[i]] = 1;
    }
    S+=A[i];
  }
  cin>>Q;
  vector<ll> B(Q), C(Q);
  for (i=0;i<Q;i++) cin>>B[i]>>C[i];
  for (i=0;i<Q;i++) {
    if(AC.count(B[i]) && AC[B[i]] > 0) {
      S+=(C[i]-B[i])*AC[B[i]];
      if (AC.count(C[i])) {
        AC[C[i]] += AC[B[i]];
      } else {
        AC[C[i]] = AC[B[i]];
      }
      AC[B[i]] = 0;
    }
    cout<<S<<endl;
  }
  return 0;
}
