#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define rep(i,n) for((i)=0;(i)<(n);(i)++)
#define max(a,b) ((a)>(b) ? (a) : (b))
#define AL 26
int main(){
  int d,i,j,sc=0;
  ll c[26],s[365][26],t[365];
  ll interval[26]={0};
  cin >> d;
  rep(i,AL) cin >> c[i];
  rep(i,d){
    rep(j,AL) cin >> s[i][j];
  }
  rep(i,d){
    cin >> t[i];
    t[i]--;
  }
  rep(i,d){
    rep(j,AL){
      interval[j]++;
      if(j==t[i]){
        sc += s[i][j];
        interval[j]=0;
      }
      sc -= interval[j]*c[j];
    }
    cout << sc << endl;
  }
  return 0;
}