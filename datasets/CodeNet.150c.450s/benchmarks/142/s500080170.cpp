#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)
#define rep2(i,a,n) for(int i=(a); i<(n); i++)
#define all(vec) vec.begin(),vec.end()
using vi = vector<int>;
using vvi = vector<vi>;
using ll = long long;
int main() {
  int N, K;
  cin >> N >> K;
  vi score(N);
  rep(i,N) cin >> score[i];
  rep(i,N-K){
    if(score[i+K]>score[i]) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
return 0;
}
