#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int findSumOfDigits(int n) {
  int sum = 0;
  while (n > 0) { // n が 0 になるまで
    sum += n % 10;
    n /= 10;
  }
  return sum;
}
int main(){
  int n,m,l;
  cin >> n >> m >> l;
  vector<vector<long long>> a(n,vector<long long>(m));
  rep(i,n) rep(j,m) cin >> a.at(i).at(j);
  vector<vector<long long>> b(m,vector<long long>(l));
  rep(i,m) rep(j,l) cin >> b.at(i).at(j);
  vector<vector<long long>> c(n,vector<long long>(l));
  rep(i,n){
    rep(j,l){
      rep(k,m){
        c.at(i).at(j) += a.at(i).at(k)*b.at(k).at(j);
      }
    }
  }
  rep(i,n){
    rep(j,l){
      cout << c.at(i).at(j);
      if(j == l-1) break;
      cout << " ";
    }
    cout << endl;
  }
}
