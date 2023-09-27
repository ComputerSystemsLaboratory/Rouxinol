#include <bits/stdc++.h>
#define REP(a,b,c) for(int a=b; a<(int)c; a++)
#define REPD(a,b,c) for(int a=b; a>(int)c; a--)
#define rep(a,b) REP(a,0,b)
#define repd(a,b) REPD(a,b,0)
typedef long long int ll;
using namespace std;

int main(){
  int r, c;
  cin >> r >> c;
  vector< vector<int> > A(r, vector<int>(c));
  rep(i,r) rep(j,c) cin >> A[i][j];
  rep(i,r){
    int sum = 0;
    rep(j,c){
      sum += A[i][j];
      cout << A[i][j] << " ";
    }
    A[i].push_back(sum);
    cout << sum << endl;
  }
  rep(i, c+1){
    int sum = 0;
    rep(j, r){
      sum += A[j][i];
    }
    if(i != c)
      cout << sum << " ";
    else
      cout << sum;
  }
  cout << endl;
  return 0;
}