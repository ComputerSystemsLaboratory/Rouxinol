#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
typedef tuple<int,int,int> tii;
typedef long long ll;
#define rep(i,s,n) for(int i=(int)(s);i<(int)(n);i++)

int main(){
  int N; cin >>N;
  int A[N];
  ll sum = 0;
  map<ll,ll> mp;
  for(int i=0;i<N;i++){
    cin >> A[i];
    sum += A[i];
    mp[A[i]]++;
  }
  sort(A,A+N);
  int Q; cin >>Q;
  ll B[Q],C[Q],d[Q];
  
  for(int i=0;i<Q;i++){
    cin >> B[i] >> C[i];
    d[i] = C[i]-B[i];
  }
  for(int i=0;i<Q;i++){
    sum += mp[B[i]]*d[i];
    mp[C[i]]+= mp[B[i]];
    mp[B[i]]=0;
    cout << sum << endl;
  }
  
  
}